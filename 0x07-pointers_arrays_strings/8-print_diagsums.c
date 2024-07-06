#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the first element of the matrix.
 * @size: Size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int i, primary_sum = 0, secondary_sum = 0;

	/* Compute sums for the diagonals */
	for (i = 0; i < size; i++)
	{
		/* accessing primary diagonal */
		primary_sum += *(a + i * size + i);
		/* accessing secondary diagonal */
		secondary_sum += *(a + i * size + (size - 1 - i));
	}

	/* Print the sums in the required format */
	printf("%d, %d\n",
	       primary_sum,
	       secondary_sum);
}
