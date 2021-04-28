#ifndef AST_REPLACEMENT_UTILS_H
#define AST_REPLACEMENT_UTILS_H

#include "clang/ASTMatchers/ASTMatchers.h"
#include "clang/Tooling/RefactoringCallbacks.h"

using namespace clang;
using namespace clang::tooling;

namespace ast {
// Taken from clang/lib/Tooling/RefactoringCallbacks.h
template <class T>
inline Replacement replaceTWithText(SourceManager &Sources, const T &From,
                                    StringRef Text) {
  return tooling::Replacement(
      Sources, CharSourceRange::getTokenRange(From.getSourceRange()), Text);
}

template <class T>
inline Replacement replaceTWithT(SourceManager &Sources, const T &From,
                                 const T &To) {
  return replaceTWithText(
      Sources, From,
      Lexer::getSourceText(CharSourceRange::getTokenRange(To.getSourceRange()),
                           Sources, LangOptions()));
}
} // namespace ast
#endif // AST_REPLACEMENT_UTILS_H
