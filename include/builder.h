#ifndef GHERKIN_BUILDER_H_
#define GHERKIN_BUILDER_H_

#include "error_list.h"
#include "rule_type.h"
#include "token.h"

typedef struct Builder Builder;

GHERKIN_EXPORT typedef void (*builder_reset_function) (Builder*);

GHERKIN_EXPORT typedef void (*builder_error_context_function) (Builder*, ErrorList*);

GHERKIN_EXPORT typedef void (*build_function) (Builder*, Token*);

GHERKIN_EXPORT typedef void (*rule_function) (Builder*, RuleType);

struct Builder {
    builder_reset_function reset;
    builder_error_context_function set_error_context;
    build_function build;
    rule_function start_rule;
    rule_function end_rule;
};

#endif /* GHERKIN_BUILDER_H_ */
