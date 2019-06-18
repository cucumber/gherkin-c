#ifndef GHERKIN_AST_BUILDER_H_
#define GHERKIN_AST_BUILDER_H_

#include "builder.h"
#include "gherkin_document.h"

#ifdef __cplusplus
extern "C" {
#endif

GHERKIN_EXPORT Builder* AstBuilder_new();

GHERKIN_EXPORT void AstBuilder_delete(Builder* builder);

GHERKIN_EXPORT const GherkinDocument* AstBuilder_get_result(Builder* builder);

#ifdef __cplusplus
}
#endif

#endif /* GHERKIN_AST_BUILDER_H_ */
