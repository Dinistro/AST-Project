#ifndef AST_IF_ELSE_BREAKUP_CALLBACK_H
#define AST_IF_ELSE_BREAKUP_CALLBACK_H

#include "clang/Tooling/RefactoringCallbacks.h"

using namespace clang;
using namespace clang::tooling;

namespace ast {
class IfElseBreakupCallback : public RefactoringCallback {
public:
  void run(const ast_matchers::MatchFinder::MatchResult &Result) override;

  static void registerInMatcher(ASTMatchRefactorer &matcher);
};
} // namespace ast
#endif // AST_IF_ELSE_BREAKUP_CALLBACK_H
