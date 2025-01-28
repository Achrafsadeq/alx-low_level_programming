#include "search_algos.h"

/**
 * binary_search_exp - Performs binary search on a specific range
 * @array: Pointer to first element of array
 * @start: Start index of the range
 * @end: End index of the range
 * @value: Value to search for
 * Return: Index where value is located or -1 if not found
 */
int binary_search_exp(int *array, size_t start, size_t end, int value)
{
	size_t i, mid;

	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i < end)
				printf(", ");
		}
		printf("\n");

		mid = (start + end) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array using
 *                     Exponential search algorithm
 * @array: Pointer to first element of array
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: First index where value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t end;

	if (!array || size == 0)
		return (-1);

	/* Find range for binary search */
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	/* Calculate end index for binary search */
	end = (bound < size - 1) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, end);

	/* Perform binary search on the found range */
	return (binary_search_exp(array, bound / 2, end, value));
}
