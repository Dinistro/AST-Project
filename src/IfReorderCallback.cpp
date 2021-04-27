#include "./IfReorderCallback.h"
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
}
// Taken from clang/lib/Tooling/RefactoringCallbacks.h
static Replacement replaceStmtWithText(SourceManager &Sources, const Stmt &From,
                                       StringRef Text) {
  return tooling::Replacement(
      Sources, CharSourceRange::getTokenRange(From.getSourceRange()), Text);
}

static Replacement replaceStmtWithStmt(SourceManager &Sources, const Stmt &From,
                                       const Stmt &To) {
  return replaceStmtWithText(
      Sources, From,
      Lexer::getSourceText(CharSourceRange::getTokenRange(To.getSourceRange()),
                           Sources, LangOptions()));
}

static Replacement negateExpr(SourceManager &Sources, const Expr &expr) {
  llvm::errs() << "gugus\n";
  expr.getSourceRange().dump(Sources);
  std::string str = Lexer::getSourceText(
                        CharSourceRange::getTokenRange(expr.getSourceRange()),
                        Sources, LangOptions())
                        .str();
  str = "!(" + str + ")";
  llvm::errs() << str << "\n";
  return tooling::Replacement(
      Sources, CharSourceRange::getTokenRange(expr.getSourceRange()),
      llvm::StringRef(str));
}

void IfReorderCallback::run(
    const ast_matchers::MatchFinder::MatchResult &Result) {
  ASTContext *context = Result.Context;
  SourceManager &sm = context->getSourceManager();
  const IfStmt *ifStmt = Result.Nodes.getNodeAs<IfStmt>("if");
  if (!ifStmt)
    return;
  if (!sm.isWrittenInMainFile(ifStmt->getBeginLoc()))
    return;

  auto thenBlock = Result.Nodes.getNodeAs<Stmt>("then");
  auto elseBlock = Result.Nodes.getNodeAs<Stmt>("else");

  auto err = Replace.add(replaceStmtWithStmt(sm, *thenBlock, *elseBlock));
  if (err)
    llvm::errs() << llvm::toString(std::move(err)) << "\n";

  err = Replace.add(replaceStmtWithStmt(sm, *elseBlock, *thenBlock));
  if (err)
    llvm::errs() << llvm::toString(std::move(err)) << "\n";

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

