#ifndef GHERKIN_AST_PRINTER_H_
#define GHERKIN_AST_PRINTER_H_

#include "exports.h"
#include "gherkin_document.h"

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

GHERKIN_EXPORT void AstPrinter_print_gherkin_document(FILE* file, const GherkinDocument* gherkin_document);

#ifdef __cplusplus
}
#endif

#endif /* GHERKIN_AST_PRINTER_H_ */
