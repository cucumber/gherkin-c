#ifndef GHERKIN_ERROR_LIST_H_
#define GHERKIN_ERROR_LIST_H_

#include "exports.h"
#include "error.h"
#include "token.h"

#include <stdbool.h>
#include <setjmp.h>
#include <wchar.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ErrorList ErrorList;

GHERKIN_EXPORT ErrorList* ErrorList_new();

GHERKIN_EXPORT void ErrorList_delete(ErrorList* error_list);

GHERKIN_EXPORT void ErrorList_set_global_rescue_env(ErrorList* error_list, jmp_buf* env);

GHERKIN_EXPORT void ErrorList_set_local_rescue_env(ErrorList* error_list, jmp_buf* env);

GHERKIN_EXPORT void ErrorList_jump_to_global_rescue_env(ErrorList* error_list);

GHERKIN_EXPORT void ErrorList_jump_to_local_rescue_env(ErrorList* error_list);

GHERKIN_EXPORT bool ErrorList_is_empty(ErrorList* error_list);

GHERKIN_EXPORT void ErrorList_add(ErrorList* error_list, const wchar_t* error, const Location location);

GHERKIN_EXPORT void ErrorList_add_unexpected_eof_error(ErrorList* error_list, Token* received_token, const wchar_t* expected_tokens);

GHERKIN_EXPORT void ErrorList_add_unexpected_token_error(ErrorList* error_list, Token* received_token, const wchar_t* expected_tokens);

GHERKIN_EXPORT void ErrorList_add_no_such_language_error(ErrorList* error_list, Location* location, const wchar_t* language);

GHERKIN_EXPORT void ErrorList_add_inconsisten_cell_count_error(ErrorList* error_list, Location location);

GHERKIN_EXPORT void ErrorList_internal_grammar_error(ErrorList* error_list);

GHERKIN_EXPORT void ErrorList_add_invalid_operation_error(ErrorList* error_list, int state);

GHERKIN_EXPORT bool ErrorList_has_more_errors(ErrorList* error_list);

GHERKIN_EXPORT Error* ErrorList_next_error(ErrorList* error_list);

#ifdef __cplusplus
}
#endif

#endif /* GHERKIN_ERROR_LIST_H_ */
