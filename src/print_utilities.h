#ifndef GHERKIN_PRINT_UTILITIES_H_
#define GHERKIN_PRINT_UTILITIES_H_

#include <stdio.h>
#include <wchar.h>

#include "exports.h"

#ifdef __cplusplus
extern "C" {
#endif

GHERKIN_EXPORT void PrintUtilities_print_json_string(FILE* file, const wchar_t* text);

GHERKIN_EXPORT void PrintUtilities_print_wide_string(FILE* file, const wchar_t* text);

#ifdef __cplusplus
}
#endif

#endif /* GHERKIN_PRINT_UTILITIES_H_ */
