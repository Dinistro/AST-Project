#include "./CustomFrontendAction.h"
#include "./CustomConsumer.h"
#include <clang/Frontend/CompilerInstance.h>

using namespace ast;

std::unique_ptr<clang::ASTConsumer>
CustomFrontendAction::CreateASTConsumer(clang::CompilerInstance &compiler,
                                        llvm::StringRef inFile) {
  return std::unique_ptr<clang::ASTConsumer>(new CustomConsumer());
}

