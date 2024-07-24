#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Executes a function given as a parameter
 *                  on each item of an array.
 * @array: The array of integers.
 * @size: The size of the array.
 * @action: A pointer to the function to be applied to each item.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (!array || !action)
	{
		/* Return if array or action is NULL to avoid undefined behavior */
		return;
	}

	for (index = 0; index < size; index++)
	{
		/* Apply the action function to each item in the array */
		action(array[index]);
	}
}
