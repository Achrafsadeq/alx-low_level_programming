#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the first element of the matrix.
 * @size: The size of the matrix (number of rows/columns).
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int mdi = 0;
	int sdi = 0;

	while (i < size)
	{
		/* Add the value of the main diagonal element */
		mdi += a[i * size + i];

		/* Check if the current element is not on the secondary diagonal
		 * before adding it to the secondary diagonal sum
		 */
		if (i != (size - 1 - i))
		{
			sdi += a[i * size + (size - 1 - i)];
		}

		i++;
	}

	printf("%d, %d\n", mdi, sdi);
}
