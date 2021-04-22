#ifndef AST_CUSTOM_FRONTEND_ACTION_H
#define AST_CUSTOM_FRONTEND_ACTION_H

#include <clang/Frontend/FrontendActions.h>
#include <llvm/ADT/StringRef.h>

namespace clang {
class CompilerInstance;
}

namespace ast {
class CustomFrontendAction : public clang::ASTFrontendAction {
public:
  virtual std::unique_ptr<clang::ASTConsumer>
  CreateASTConsumer(clang::CompilerInstance &compiler,
                    llvm::StringRef inFile) override;
};
} // namespace ast

#endif // AST_CUSTOM_FRONTEND_ACTION_H
