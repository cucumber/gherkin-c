#ifndef GHERKIN_TABLE_CELL_H_
#define GHERKIN_TABLE_CELL_H_

#include <wchar.h>

#include "exports.h"
#include "ast.h"
#include "location.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TableCell {
    item_delete_function cell_delete;
    GherkinAstType type;
    Location location;
    wchar_t* value;
} TableCell;

typedef struct TableCells {
    int cell_count;
    TableCell* table_cells;
} TableCells;

GHERKIN_EXPORT const TableCell* TableCell_new(Location location, const wchar_t* value);

GHERKIN_EXPORT void TableCell_delete(const TableCell* table_cell);

GHERKIN_EXPORT void TableCell_transfer(TableCell* to_table_cell, TableCell* from_table_cell);

GHERKIN_EXPORT void TableCells_delete(const TableCells* table_cells);

#ifdef __cplusplus
}
#endif

#endif /* GHERKIN_TABLE_CELL_H_ */
