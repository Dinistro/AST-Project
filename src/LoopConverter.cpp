#include "./LoopConverter.h"

using namespace ast;
StatementMatcher ast::LoopMatcher =
    forStmt(hasLoopInit(declStmt(hasSingleDecl(
                varDecl(hasInitializer(integerLiteral(equals(0))))))))
        .bind("forLoop");

void LoopPrinter::run(const MatchFinder::MatchResult &Result) {
  if (const ForStmt *FS = Result.Nodes.getNodeAs<clang::ForStmt>("forLoop"))
    FS->dump();
} // namespace ast
