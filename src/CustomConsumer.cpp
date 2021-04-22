#include "./CustomConsumer.h"
#include "./LoopTransformer.h"

using namespace ast;

void CustomConsumer::HandleTranslationUnit(clang::ASTContext &context) {
  rewriter.setSourceMgr(context.getSourceManager(), context.getLangOpts());

  llvm::outs() << "HandleTranslationUnit\n";

  LoopTransformer lt(context, rewriter);

  lt.start();

  auto buffer =
      rewriter.getRewriteBufferFor(context.getSourceManager().getMainFileID());
  if (buffer != nullptr)
    buffer->write(llvm::outs());
  else
    llvm::outs() << "NOTHING DONE\n";
}
