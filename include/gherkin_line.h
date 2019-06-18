#ifndef GHERKIN_GHERKIN_LINE_H_
#define GHERKIN_GHERKIN_LINE_H_

#include <stdbool.h>
#include <wchar.h>

#include "exports.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GherkinLine {
    int line_number;
    int indent;
    const wchar_t* line_text;
    const wchar_t* trimmed_line;
} GherkinLine;

typedef struct Span {
    int column;
    wchar_t* text;
} Span;

typedef struct Items {
    int count;
    Span* items;
} Items;

GHERKIN_EXPORT const GherkinLine* GherkinLine_new(const wchar_t* line_text, int line_number);

GHERKIN_EXPORT void GherkinLine_delete(const GherkinLine* line);

GHERKIN_EXPORT bool GherkinLine_start_with(const GherkinLine* line, const wchar_t* prefix);

GHERKIN_EXPORT bool GherkinLine_start_with_title_keyword(const GherkinLine* line, const wchar_t* keyword);

GHERKIN_EXPORT bool GherkinLine_is_empty(const GherkinLine* line);

GHERKIN_EXPORT wchar_t* GherkinLine_copy_rest_trimmed(const GherkinLine* line, int length);

GHERKIN_EXPORT wchar_t* GherkinLine_copy_line_text(const GherkinLine* line, int indent_to_remove);

GHERKIN_EXPORT const Items* GherkinLine_table_cells(const GherkinLine* line);

GHERKIN_EXPORT const Items* GherkinLine_tags(const GherkinLine* line);

GHERKIN_EXPORT bool GherkinLine_is_language_line(const GherkinLine* line);

GHERKIN_EXPORT const wchar_t* GherkinLine_get_language(const GherkinLine* line);


#ifdef __cplusplus
}
#endif

#endif /* GHERKIN_GHERKIN_LINE_H_ */
