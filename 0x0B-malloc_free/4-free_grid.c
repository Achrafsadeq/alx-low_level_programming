#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid previously created by alloc_grid
 * @grid: The address of the two dimensional grid
 * @height: Height of the grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int index;

	/* Check if grid is NULL or height is invalid */
	if (grid == NULL || height <= 0)
		return;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}

	free(grid);
}
