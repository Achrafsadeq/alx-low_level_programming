#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using comparison function
 * @array: Array to search
 * @size: Number of elements in the array
 * @cmp: Pointer to the comparison function
 *
 * Description: This function iterates through the array and applies the
 * comparison function to each element. It returns the index of the first
 * element for which the comparison function does not return 0.
 *
 * Return: Index of the first element for which cmp doesn't return 0,
 *         or -1 if no element matches or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array && cmp && size > 0)
	{
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]) != 0)
				return (index);
		}
	}
	return (-1);
}
