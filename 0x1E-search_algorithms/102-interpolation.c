#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 *                        using the interpolation search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index containing value, or -1 if value is not found
 *         or array is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t position;

	if (!array)
		return (-1);

	while ((array[high] != array[low]) &&
	       (value >= array[low]) && (value <= array[high]))
	{
		position = low + (((double)(high - low) / (array[high] - array[low]))
			    * (value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", position, array[pos]);
		/* Narrow the search range based on the comparison */
		if (array[position] < value)
			low = position + 1;
		else if (value < array[position])
			high = position - 1;
		else
			return (position);
	}

	/* Handle the case where only one element remains in the range */
	if (value == array[low])
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		return (low);
	}
	/* If the value is outside the array bounds, indicate it's out of range */
	position = low + (((double)(high - low) / (array[high] - array[low]))
		     * (value - array[low]));
	printf("Value checked array[%lu] is out of range\n", position);
	return (-1);
