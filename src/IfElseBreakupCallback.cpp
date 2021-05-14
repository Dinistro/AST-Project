#include "./IfElseBreakupCallback.h"
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

StringRef uniqueName = "_____c_________";
} // namespace

void IfElseBreakupCallback::run(const MatchFinder::MatchResult &Result) {
  ASTContext *context = Result.Context;
  SourceManager &sm = context->getSourceManager();

  const IfStmt *ifStmt = Result.Nodes.getNodeAs<IfStmt>("if");
  if (!ifStmt)
    return;
  if (!sm.isWrittenInMainFile(ifStmt->getBeginLoc()))
    return;

  auto thenBlock = Result.Nodes.getNodeAs<Stmt>("then");
  auto elseBlock = Result.Nodes.getNodeAs<Stmt>("else");
  auto cond = Result.Nodes.getNodeAs<Expr>("cond");

  std::string repStr;
  llvm::raw_string_ostream repStrStream(repStr);
  repStrStream << "{\n";
  repStrStream << "int " << uniqueName << " = " << strOfT(sm, cond) << ";\n";
  repStrStream << "if(" << uniqueName << ")";
  repStrStream << strOfT(sm, thenBlock) << "\n";

  repStrStream << "if(!" << uniqueName << ")";
  repStrStream << strOfT(sm, elseBlock) << "\n";

  repStrStream << "}\n";
  repStrStream.flush();

  auto err = Replace.add(replaceTWithText(sm, *ifStmt, repStr));
  if (err) {
    llvm::errs() << llvm::toString(std::move(err)) << "\n";
    return;
  }
}

void IfElseBreakupCallback::registerInMatcher(ASTMatchRefactorer &matcher) {
  // TODO where to store the instance?
  static IfElseBreakupCallback c;
  matcher.addMatcher(ifMatcher, &c);
}

