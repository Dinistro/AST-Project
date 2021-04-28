// Based on https://clang.llvm.org/docs/LibASTMatchersTutorial.html

// Declares clang::SyntaxOnlyAction.
#include "clang/ASTMatchers/ASTMatchers.h"
#include "clang/Frontend/FrontendActions.h"
#include "clang/Tooling/CommonOptionsParser.h"
#include "clang/Tooling/Refactoring.h"
#include "clang/Tooling/Refactoring/RefactoringAction.h"
#include "clang/Tooling/Refactoring/RefactoringActionRules.h"
#include "clang/Tooling/RefactoringCallbacks.h"
#include "clang/Tooling/Tooling.h"
// Declares llvm::cl::extrahelp.
#include "llvm/Support/CommandLine.h"

#include "./AddReorderCallback.h"
#include "./IfReorderCallback.h"

using namespace clang::tooling;
using namespace clang::ast_matchers;
using namespace llvm;
using namespace ast;

// Apply a custom category to all command-line options so that they are the
// only ones displayed.
static llvm::cl::OptionCategory MyToolCategory("my-tool options");

// CommonOptionsParser declares HelpMessage with a description of the common
// command-line options related to the compilation database and input files.
// It's nice to have this help message in all tools.
static cl::extrahelp CommonHelp(CommonOptionsParser::HelpMessage);

// A help message for this specific tool can be added afterwards.
static cl::extrahelp MoreHelp("\nMore help text...\n");

// TODO define flags that activate certain refactorings
// Find out how to apply them in sequence
int main(int argc, const char **argv) {
  auto ExpectedParser = CommonOptionsParser::create(argc, argv, MyToolCategory,
                                                    llvm::cl::ZeroOrMore);
  if (!ExpectedParser) {
    // Fail gracefully for unsupported options.
    llvm::errs() << ExpectedParser.takeError();
    return 1;
  }
  CommonOptionsParser &optionsParser = ExpectedParser.get();

  RefactoringTool Tool(optionsParser.getCompilations(),
                       optionsParser.getSourcePathList());

  ASTMatchRefactorer Finder(Tool.getReplacements());
  IfReorderCallback::registerInMatcher(Finder);
  AddReorderCallback::registerInMatcher(Finder);

  if (Tool.runAndSave(newFrontendActionFactory(&Finder).get())) {
    return 1;
  }
}
