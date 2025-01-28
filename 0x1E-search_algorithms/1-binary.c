#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - Implements binary search to locate a value in a sorted
 *                 array of integers.
 * @array: Pointer to the first element of the array to search through.
 * @size: The number of elements in the array.
 * @value: The value to search for within the array.
 *
 * Return: The index where the value is found, or -1 if the value is absent
 *         or the array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (!array)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		/* Calculate the middle index */
		i = left + (right - left) / 2;

		/* Check if the middle element matches the target value */
		if (array[i] == value)
			return (i);

		/* Adjust the search boundaries based on the comparison */
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}
