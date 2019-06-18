#ifndef GHERKIN_TOKEN_SCANNER_H_
#define GHERKIN_TOKEN_SCANNER_H_

#include <wchar.h>

#include "exports.h"
#include "token.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TokenScanner TokenScanner;

GHERKIN_EXPORT typedef Token* (*read_function) (TokenScanner*);

GHERKIN_EXPORT typedef void (*delete_function) (TokenScanner*);

struct TokenScanner {
    read_function read;
    delete_function scanner_delete;
};

GHERKIN_EXPORT void TokenScanner_delete(TokenScanner* token_scanner);

#ifdef __cplusplus
}
#endif

#endif /* GHERKIN_TOKEN_SCANNER_H_ */
