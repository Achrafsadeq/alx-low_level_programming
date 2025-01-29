#include "search_algos.h"
#include <stdio.h>

/**
 * interpolation_search - searches for a value in a sorted array using
 * interpolation search algorithm
 * @array: pointer to first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located,
 * or -1 if not found or array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t position;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		position = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));

		if (position >= size)
		{
			printf("Value checked array[%lu] is out of range\n", position);
			break;
		}

		printf("Value checked array[%lu] = [%d]\n", position, array[position]);

		if (array[position] == value)
			return (position);

		if (array[position] < value)
			low = position + 1;
		else
			high = position - 1;
	}
	return (-1);
}
