#ifndef AST_FOR_TO_WHILE_H
#define AST_FOR_TO_WHILE_H

#include "clang/Tooling/RefactoringCallbacks.h"

using namespace clang;
using namespace clang::tooling;

namespace ast {
class ForToWhileCallback : public RefactoringCallback {
public:
  void run(const ast_matchers::MatchFinder::MatchResult &Result) override;

  static void registerInMatcher(ASTMatchRefactorer &matcher);
};
} // namespace ast
#endif // AST_FOR_TO_WHILE_H
