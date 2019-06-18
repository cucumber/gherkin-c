#ifndef GHERKIN_COMPILER_H_
#define GHERKIN_COMPILER_H_

#include <stdbool.h>
#include <wchar.h>

#include "exports.h"
#include "gherkin_document.h"
#include "pickle.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Compiler Compiler;

GHERKIN_EXPORT Compiler* Compiler_new();

GHERKIN_EXPORT void Compiler_delete(Compiler* compiler);

GHERKIN_EXPORT int Compiler_compile(Compiler* compiler, const GherkinDocument* gherkin_document);

GHERKIN_EXPORT bool Compiler_has_more_pickles(Compiler* compiler);

GHERKIN_EXPORT const Pickle* Compiler_next_pickle(Compiler* compiler);

GHERKIN_EXPORT bool Compiler_has_more_errors(Compiler* compiler);

GHERKIN_EXPORT const wchar_t* Compiler_next_error(Compiler* compiler);

#ifdef __cplusplus
}
#endif

#endif /* GHERKIN_COMPILER_H_ */
