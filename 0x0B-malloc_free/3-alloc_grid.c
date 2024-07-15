#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers
 * @width: Width of the grid
 * @height: Height of the grid
 *
 * Return: Pointer to the 2D array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int row, col;

	/* Check for invalid dimensions */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for rows */
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	/* Allocate memory for columns and initialize to 0 */
	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(sizeof(int) * width);
		if (grid[row] == NULL)
		{
			/* Free previously allocated memory on failure */
			for (col = 0; col < row; col++)
				free(grid[col]);
			free(grid);
			return (NULL);
		}

		/* Initialize all elements to 0 */
		for (col = 0; col < width; col++)
			grid[row][col] = 0;
	}

	return (grid);
}
