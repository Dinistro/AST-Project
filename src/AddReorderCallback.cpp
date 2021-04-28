#include "./AddReorderCallback.h"
#include "./ReplacementUtils.h"
#include "clang/ASTMatchers/ASTMatchers.h"
#include "clang/Frontend/FrontendActions.h"
#include "clang/Tooling/RefactoringCallbacks.h"

using namespace clang;
using namespace clang::ast_matchers;
using namespace ast;

namespace {
StatementMatcher addMatcher =
    expr(hasType(isInteger()),
         binaryOperator(hasOperatorName("+"), hasLHS(expr().bind("lhs")),
                        hasRHS(expr().bind("rhs"))))
        .bind("expr");
}

void AddReorderCallback::run(const MatchFinder::MatchResult &Result) {
  ASTContext *context = Result.Context;
  SourceManager &sm = context->getSourceManager();
  // TODO how to deal with recursive replacements?
  const Expr *expr = Result.Nodes.getNodeAs<Expr>("expr");
  if (!expr)
    return;
  if (!sm.isWrittenInMainFile(expr->getBeginLoc()))
    return;
  llvm::outs() << "Found one expr\n";

  auto lhs = Result.Nodes.getNodeAs<Expr>("lhs");
  auto rhs = Result.Nodes.getNodeAs<Expr>("rhs");

  auto err = Replace.add(replaceTWithT<Expr>(sm, *lhs, *rhs));
  if (err) {
    llvm::errs() << llvm::toString(std::move(err)) << "\n";
    return;
  }

  err = Replace.add(replaceTWithT<Expr>(sm, *rhs, *lhs));
  if (err) {
    llvm::errs() << llvm::toString(std::move(err)) << "\n";
    return;
  }
}

void AddReorderCallback::registerInMatcher(ASTMatchRefactorer &matcher) {
  // TODO where to store the instance?
  static AddReorderCallback c;
  matcher.addMatcher(addMatcher, &c);
}
