#include "./IfReorderCallback.h"
#include "./ReplacementUtils.h"
#include "clang/ASTMatchers/ASTMatchers.h"
#include "clang/Frontend/FrontendActions.h"
#include "clang/Tooling/RefactoringCallbacks.h"

using namespace clang;
using namespace clang::ast_matchers;
using namespace ast;

namespace {
StatementMatcher ifMatcher =
    ifStmt(hasCondition(expr().bind("cond")), hasThen(stmt().bind("then")),
           hasElse(stmt().bind("else")))
        .bind("if");

Replacement negateExpr(SourceManager &Sources, const Expr &expr) {
  expr.getSourceRange().dump(Sources);
  std::string str = Lexer::getSourceText(
                        CharSourceRange::getTokenRange(expr.getSourceRange()),
                        Sources, LangOptions())
                        .str();
  str = "!(" + str + ")";
  return tooling::Replacement(
      Sources, CharSourceRange::getTokenRange(expr.getSourceRange()),
      llvm::StringRef(str));
}
} // namespace

void IfReorderCallback::run(const MatchFinder::MatchResult &Result) {
  ASTContext *context = Result.Context;
  SourceManager &sm = context->getSourceManager();
  const IfStmt *ifStmt = Result.Nodes.getNodeAs<IfStmt>("if");
  if (!ifStmt)
    return;
  if (!sm.isWrittenInMainFile(ifStmt->getBeginLoc()))
    return;

  auto thenBlock = Result.Nodes.getNodeAs<Stmt>("then");
  auto elseBlock = Result.Nodes.getNodeAs<Stmt>("else");

  auto err = Replace.add(replaceTWithT(sm, *thenBlock, *elseBlock));
  if (err) {
    llvm::errs() << llvm::toString(std::move(err)) << "\n";
    return;
  }

  err = Replace.add(replaceTWithT(sm, *elseBlock, *thenBlock));
  if (err) {
    llvm::errs() << llvm::toString(std::move(err)) << "\n";
    return;
  }

  // negate condition
  auto expr = Result.Nodes.getNodeAs<Expr>("cond");
  err = Replace.add(negateExpr(sm, *expr));
  if (err)
    llvm::errs() << llvm::toString(std::move(err)) << "\n";
}

void IfReorderCallback::registerInMatcher(ASTMatchRefactorer &matcher) {
  // TODO where to store the instance?
  static IfReorderCallback c;
  matcher.addMatcher(ifMatcher, &c);
}

