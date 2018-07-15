#ifndef GHERKIN_PICKLE_STEP_H_
#define GHERKIN_PICKLE_STEP_H_

#include <wchar.h>

#include "pickle_location.h"
#include "pickle_argument.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PickleStep {
    const PickleLocations* locations;
    wchar_t* text;
    const PickleArgument* argument;
} PickleStep;

typedef struct PickleSteps {
    int step_count;
    PickleStep* steps;
} PickleSteps;

GHERKIN_EXPORT const PickleStep* PickleStep_new(const PickleLocations* locations, const wchar_t* text, const PickleArgument* argument);

GHERKIN_EXPORT void PickleStep_delete(const PickleStep* pickle_step);

GHERKIN_EXPORT void PickleStep_transfer(PickleStep* to_pickle_step, PickleStep* from_pickle_step);

GHERKIN_EXPORT void PickleSteps_delete(const PickleSteps* pickle_steps);

#ifdef __cplusplus
}
#endif

#endif /* GHERKIN_PICKLE_STEP_H_ */
