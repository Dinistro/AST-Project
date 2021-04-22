#include "./LoopTransformer.h"

using namespace ast;
using namespace clang::ast_matchers;

namespace {
StatementMatcher loopMatcher =
    forStmt(hasLoopInit(declStmt(
                hasSingleDecl(varDecl(hasInitializer(integerLiteral(equals(0))))
                                  .bind("varDecl")))))
        .bind("forLoop");
} // namespace

LoopTransformer::LoopTransformer(clang::ASTContext &context,
                                 clang::Rewriter &rewriter)
    : context(context), rewriter(rewriter) {}

void LoopTransformer::start() {
  MatchFinder functionFinder;

  functionFinder.addMatcher(loopMatcher, this);

  functionFinder.matchAST(context);
}

void LoopTransformer::run(const MatchFinder::MatchResult &result) {
  ASTContext *context = result.Context;

  const ForStmt *fs = result.Nodes.getNodeAs<ForStmt>("forLoop");
  // We do not want to convert header files!
  if (!fs || !context->getSourceManager().isWrittenInMainFile(fs->getForLoc()))
    return;

  fs->dump();
  const VarDecl *IncVar = result.Nodes.getNodeAs<VarDecl>("varDecl");
  if (!IncVar)
    return;
  IncVar->dump();

  llvm::outs() << "FUUBAR\n";
}

