#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * @size: the size of the square
 */
void print_square(int size)
{
	/* Variable declarations */
	int row, column;

	if (size <= 0)
	{
		_putchar('\n'); /* Print a newline if size is less than or equal to 0 */
	}
	else
	{
		/* Loop through each row */
		for (row = 0; row < size; row++)
		{
			/* Loop to print '#' for each column */
			for (column = 0; column < size; column++)
			{
				_putchar('#'); /* Print '#' character */
			}
			_putchar('\n'); /* Move to the next line after each row */
		}
	}
}
