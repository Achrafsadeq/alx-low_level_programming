#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number defining the times table.
 *
 * Description: This function prints the times table for n. If n is
 *              greater than 15 or less than 0, the function does nothing.
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;

			if (j == 0)
				printf("%d", product);
			else
				printf(", %3d", product);
		}
		printf("\n");
	}
}
