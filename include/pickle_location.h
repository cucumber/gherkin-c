#ifndef GHERKIN_PICKLE_LOCATION_H_
#define GHERKIN_PICKLE_LOCATION_H_

#include "exports.h"

typedef struct PickleLocation {
    int line;
    int column;
} PickleLocation;

typedef struct PickleLocations {
    int location_count;
    const PickleLocation* locations;
} PickleLocations;

GHERKIN_EXPORT const PickleLocation* PickleLocation_new(int line, int column);

GHERKIN_EXPORT const PickleLocations* PickleLocations_new_single(int line, int column);

GHERKIN_EXPORT const PickleLocations* PickleLocations_new_double(int line_1, int column_1, int line_2, int column_2);

GHERKIN_EXPORT void PickleLocations_delete(const PickleLocations* locations);

GHERKIN_EXPORT void PickleLocation_delete(const PickleLocation* location);

#endif /* GHERKIN_PICKLE_LOCATION_H_ */
