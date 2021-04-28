#ifndef AST_ADD_REORDER_CALLBACK_H
#define AST_ADD_REORDER_CALLBACK_H

#include "clang/Tooling/RefactoringCallbacks.h"

using namespace clang;
using namespace clang::tooling;

namespace ast {
class AddReorderCallback : public RefactoringCallback {
public:
  void run(const ast_matchers::MatchFinder::MatchResult &Result) override;

  // TODO make this templated?
  static void registerInMatcher(ASTMatchRefactorer &matcher);
};
} // namespace ast
#endif // AST_ADD_REORDER_CALLBACK_H
