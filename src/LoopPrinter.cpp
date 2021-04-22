#include "./LoopPrinter.h"

using namespace ast;
StatementMatcher ast::LoopMatcher =
    forStmt(hasLoopInit(declStmt(hasSingleDecl(
                varDecl(hasInitializer(integerLiteral(equals(0))))))))
        .bind("forLoop");

void LoopPrinter::run(const MatchFinder::MatchResult &Result) {
  ASTContext *Context = Result.Context;
  const ForStmt *FS = Result.Nodes.getNodeAs<ForStmt>("forLoop");
  // We do not want to convert header files!
  if (!FS || !Context->getSourceManager().isWrittenInMainFile(FS->getForLoc()))
    return;
  FS->dump();
} // namespace ast
