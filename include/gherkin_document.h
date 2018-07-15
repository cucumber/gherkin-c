#ifndef GHERKIN_GHERKIN_DOCUMENT_H_
#define GHERKIN_GHERKIN_DOCUMENT_H_

#include "ast.h"
#include "feature.h"
#include "comment.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GherkinDocument {
    item_delete_function gherkin_document_delete;
    GherkinAstType type;
    const Feature* feature;
    const Comments* comments;
} GherkinDocument;

GHERKIN_EXPORT const GherkinDocument* GherkinDocument_new(const Feature* feature, const Comments* comments);

GHERKIN_EXPORT void GherkinDocument_delete(const GherkinDocument* gherkin_document);

#ifdef __cplusplus
}
#endif

#endif /* GHERKIN_GHERKIN_DOCUMENT_H_ */
