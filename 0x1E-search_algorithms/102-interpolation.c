#include "search_algos.h"
#include <stdio.h>

/**
 * interpolation_search - searches for a value in a sorted array using
 * interpolation search algorithm
 * @array: pointer to first element of the array to search
 * @size: number of elements in array
 * @value: value to search
 *
 * Return: first index where value is located, or -1
 * if not found or array is NULL
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
		/* Calculate the probable position using the interpolation formula */
		position = low + (((double)(high - low) / (array[high] - array[low]))
					* (value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", position, array[position]);

		/* Adjust search range based on the comparison */
		if (array[position] < value)
			low = position + 1;
		else if (value < array[position])
			high = position - 1;
		else
			return (position);
	}

	if (value == array[low])
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		return (low);
	}
	position = low + (((double)(high - low) / (array[high] - array[low]))
			 * (value - array[low]));
	printf("Value checked array[%lu] is out of range\n", position);
	return (-1);
}
