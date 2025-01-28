#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 * @array: The array to print
 * @left: Left index of the array
 * @right: Right index of the array
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_recursive - Recursively performs advanced binary search
 * @array: Pointer to first element of array
 * @left: Left index of current subarray
 * @right: Right index of current subarray
 * @value: Value to search for
 * Return: Index where value is located or -1 if not found
 */
int binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (right < left)
		return (-1);

	print_array(array, left, right);

	mid = left + (right - left) / 2;

	if ((mid == left || value > array[mid - 1]) && array[mid] == value)
		return (mid);

	if (array[mid] >= value)
		return (binary_recursive(array, left, mid, value));

	return (binary_recursive(array, mid + 1, right, value));
}

/**
 * advanced_binary - Searches for first occurrence of value in sorted array
 * @array: Pointer to first element of array
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: Index where value is located or -1 if not found/array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (binary_recursive(array, 0, size - 1, value));
}
