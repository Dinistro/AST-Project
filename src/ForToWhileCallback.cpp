#include "./ForToWhileCallback.h"
#include "./ReplacementUtils.h"
#include "clang/ASTMatchers/ASTMatchers.h"
#include "clang/Frontend/FrontendActions.h"
#include "clang/Tooling/RefactoringCallbacks.h"

using namespace clang;
using namespace clang::ast_matchers;
using namespace ast;

namespace {
StatementMatcher forMatcher =
    forStmt(optionally(hasLoopInit(stmt().bind("decl"))),
            optionally(hasIncrement(expr().bind("inc"))),
            optionally(hasCondition(expr().bind("cond"))),
            optionally(hasBody(stmt().bind("body"))))
        .bind("for");
template <class T>
StringRef strOfT(SourceManager &Sources, T t) {
  return Lexer::getSourceText(
      CharSourceRange::getTokenRange(t->getSourceRange()), Sources,
      LangOptions());
}

/// Receives two statements that both represent the body. Depending on the type,
/// it will return a slightly different body representation.
/// The representatino does not contain the surounding `{` `}`
StringRef getBodyString(SourceManager &Sources, const Stmt *body,
                        const CompoundStmt *cs) {
  if (cs) {
    return Lexer::getSourceText(
        CharSourceRange::getTokenRange(SourceRange(
            cs->body_front()->getBeginLoc(), cs->body_back()->getEndLoc())),
        Sources, LangOptions());
  }
  return strOfT(Sources, body);
}

} // namespace

void ForToWhileCallback::run(const MatchFinder::MatchResult &Result) {
  ASTContext *context = Result.Context;
  SourceManager &sm = context->getSourceManager();
  const ForStmt *forStmt = Result.Nodes.getNodeAs<ForStmt>("for");
  if (!forStmt)
    return;
  if (!sm.isWrittenInMainFile(forStmt->getBeginLoc()))
    return;

  const auto *decl = Result.Nodes.getNodeAs<Stmt>("decl");
  const auto *inc = Result.Nodes.getNodeAs<Expr>("inc");
  const auto *cond = Result.Nodes.getNodeAs<Expr>("cond");
  const auto *body = Result.Nodes.getNodeAs<Stmt>("body");
  const auto *compoundBody = Result.Nodes.getNodeAs<CompoundStmt>("body");

  // TODO find the clang StringBuilder class
  std::string repStr;
  llvm::raw_string_ostream repStrStream(repStr);
  repStrStream << "{\n";
  if (decl)
    repStrStream << strOfT(sm, decl) << ";\n";

  repStrStream << "while(";
  if (cond)
    repStrStream << strOfT(sm, cond);

  repStrStream << ") {\n";
  repStrStream << getBodyString(sm, body, compoundBody) << ";\n";
  if (inc)
    repStrStream << strOfT(sm, inc) << ";\n";

  repStrStream << "}\n";
  repStrStream << "}\n";
  repStrStream.flush();

  auto err = Replace.add(replaceTWithText(sm, *forStmt, repStr));
  if (err) {
    llvm::errs() << llvm::toString(std::move(err)) << "\n";
    return;
  }
}

void ForToWhileCallback::registerInMatcher(ASTMatchRefactorer &matcher) {
  // TODO where to store the instance?
  static ForToWhileCallback c;
  matcher.addMatcher(forMatcher, &c);
}
