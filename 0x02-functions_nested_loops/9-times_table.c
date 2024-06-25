#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 *
 * Description: Uses nested loops to iterate through rows and columns,
 * calculates the product, and prints it with appropriate formatting.
 */
void times_table(void)
{
	int row, col, product;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			product = row * col;

			/* Print the product */
			if (col == 0)
			{
				_putchar(product + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				/* Print extra space for single digit products */
				if (product < 10)
				{
					_putchar(' ');
					_putchar(product + '0');
				}
				else
				{
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
