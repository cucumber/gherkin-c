#ifndef GHERKIN_PICKLE_CELL_H_
#define GHERKIN_PICKLE_CELL_H_

#include "pickle_location.h"

#include <wchar.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PickleCell {
    const PickleLocation* location;
    wchar_t* value;
} PickleCell;

typedef struct PickleCells {
    int cell_count;
    PickleCell* pickle_cells;
} PickleCells;

GHERKIN_EXPORT const PickleCell* PickleCell_new(const PickleLocation* location, const wchar_t* value);

GHERKIN_EXPORT void PickleCell_delete(const PickleCell* pickle_cell);

GHERKIN_EXPORT void PickleCell_transfer(PickleCell* to_pickle_cell, PickleCell* from_pickle_cell);

GHERKIN_EXPORT void PickleCells_delete(const PickleCells* pickle_cells);

#ifdef __cplusplus
}
#endif

#endif /* GHERKIN_PICKLE_CELL_H_ */
