#ifndef AST_LOOP_TRANSFORMER_H
#define AST_LOOP_TRANSFORMER_H

#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/ASTMatchers/ASTMatchers.h"

using namespace clang;
using namespace clang::ast_matchers;

namespace clang {
class ASTContext;
class Rewriter;
} // namespace clang

namespace ast {

class LoopTransformer : public MatchFinder::MatchCallback {
public:
  LoopTransformer(clang::ASTContext &context, clang::Rewriter &rewriter);

  virtual void start();
  virtual void run(const MatchFinder::MatchResult &result) override;

  clang::ASTContext &context;
  clang::Rewriter &rewriter;
};

} // namespace ast

#endif // AST_LOOP_TRANSFORMER_H
