#ifndef AST_CUSTOM_CONSUMER_H
#define AST_CUSTOM_CONSUMER_H

#include <clang/AST/ASTConsumer.h>
#include <clang/AST/ASTContext.h>
#include <clang/Rewrite/Core/Rewriter.h>

namespace ast {
class CustomConsumer : public clang::ASTConsumer {
public:
  virtual void HandleTranslationUnit(clang::ASTContext &context) override;

private:
  clang::Rewriter rewriter;
};
} // namespace ast

#endif // AST_CUSTOM_CONSUMER_H
