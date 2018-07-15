#include "token_scanner.h"

void TokenScanner_delete(TokenScanner* token_scanner) {
    token_scanner->scanner_delete(token_scanner);
}
