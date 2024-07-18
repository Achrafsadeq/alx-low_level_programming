#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers from min to max
 * @min: The minimum value (included)
 * @max: The maximum value (included)
 *
 * Return: Pointer to the newly created array, or NULL if failure
 */
int *array_range(int min, int max)
{
	int *array;
	int index, size;

	/* Check if min > max */
	if (min > max)
		return (NULL);

	/* Calculate the size of the array */
	size = max - min + 1;

	/* Allocate memory for the array */
	array = malloc(sizeof(int) * size);

	/* Check if malloc failed */
	if (array == NULL)
		return (NULL);

	/* Fill the array with values from min to max */
	for (index = 0; index < size; index++)
		array[index] = min + index;

	return (array);
}
