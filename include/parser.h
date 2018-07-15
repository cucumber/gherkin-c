#ifndef GHERKIN_PARSER_H_
#define GHERKIN_PARSER_H_

#include "builder.h"
#include "error.h"
#include "token_matcher.h"
#include "token_scanner.h"
#include <stdbool.h>
#include <wchar.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Parser Parser;

GHERKIN_EXPORT Parser* Parser_new(Builder* builder);

GHERKIN_EXPORT void Parser_delete(Parser* parser);

GHERKIN_EXPORT int Parser_parse(Parser* parser, TokenMatcher* token_matcher, TokenScanner* token_scanner);

GHERKIN_EXPORT bool Parser_has_more_errors(Parser* parser);

GHERKIN_EXPORT Error* Parser_next_error(Parser* parser);

#ifdef __cplusplus
}
#endif

#endif /* GHERKIN_PARSER_H_ */
