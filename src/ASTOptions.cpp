#include "./ASTOptions.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/Support/ManagedStatic.h"

using namespace llvm;

namespace {
struct ASTOptions {
  // cl::opt<bool> ASTif{"if", cl::desc("TODO"), cl::value_desc("TODO"),
  //                    cl::init(false)};
};
} // namespace

static llvm::ManagedStatic<ASTOptions> options;

void ast::registerASTOptions() {
  // Make sure options has been constructed
  *options;
}

// bool ast::ASTif() { return options->ASTif; }
