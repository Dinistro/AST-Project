#ifndef AST_LOOP_PRINTER_H
#define AST_LOOP_PRINTER_H

#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/ASTMatchers/ASTMatchers.h"

using namespace clang;
using namespace clang::ast_matchers;

namespace ast {
extern StatementMatcher LoopMatcher; /* =
     forStmt(hasLoopInit(declStmt(hasSingleDecl(
                 varDecl(hasInitializer(integerLiteral(equals(0))))))))
         .bind("forLoop");*/

class LoopPrinter : public MatchFinder::MatchCallback {
public:
  virtual void run(const MatchFinder::MatchResult &Result);
};

} // namespace ast

#endif // AST_LOOP_PRINTER_H
