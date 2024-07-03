#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array of integers to be reversed
 * @n: the number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		/* Rotate values without a temporary variable */
		a[start] = a[start] + a[end];
		a[end] = a[start] - a[end];
		a[start] = a[start] - a[end];
		start++;
		end--;
	}
}
