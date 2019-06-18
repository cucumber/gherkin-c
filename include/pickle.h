#ifndef GHERKIN_PICKLE_H_
#define GHERKIN_PICKLE_H_

#include <wchar.h>

#include "item.h"
#include "pickle_location.h"
#include "pickle_tag.h"
#include "pickle_step.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Pickle {
    item_delete_function pickle_delete;
    wchar_t* language;
    const PickleLocations* locations;
    const PickleTags* tags;
    wchar_t* name;
    const PickleSteps* steps;
} Pickle;

GHERKIN_EXPORT const Pickle* Pickle_new(const wchar_t* language, const PickleLocations* locations, const PickleTags* tags, const wchar_t* name, const PickleSteps* steps);

GHERKIN_EXPORT void Pickle_delete(const Pickle* pickle);

#ifdef __cplusplus
}
#endif

#endif /* GHERKIN_PICKLE_H_ */
