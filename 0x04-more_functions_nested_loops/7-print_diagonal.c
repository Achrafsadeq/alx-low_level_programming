#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	/* Variable declarations */
	int row, spaces;

	if (n <= 0)
	{
		_putchar('\n'); /* Print a newline if n is less than or equal to 0 */
	}
	else
	{
		/* Loop to print the diagonal lines */
		for (row = 0; row < n; row++)
		{
			/* Loop to print spaces before '\' */
			for (spaces = 0; spaces < row; spaces++)
			{
				_putchar(' ');
			}
			_putchar('\\'); /* Print '\' */
			_putchar('\n'); /* Move to the next line */
		}
	}
}
