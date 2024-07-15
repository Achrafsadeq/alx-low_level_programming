#include <stdlib.h>
#include "main.h"

/**
 * release_grid - Frees a 2 dimensional grid previously created by alloc_grid
 * @grid: The address of the two dimensional grid
 * @rows: Height of the grid
 *
 * Return: Nothing
 */
void release_grid(int **grid, int rows)
{
	int index;

	/* Check if the grid is NULL or rows is less than or equal to 0 */
	if (grid == NULL || rows <= 0)
		return;

	/* Free each row of the grid */
	for (index = 0; index < rows; index++)
	{
		free(grid[index]);
	}

	/* Free the grid itself */
	free(grid);
}
