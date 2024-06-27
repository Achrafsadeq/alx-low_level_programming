#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times the character _ should be printed
 */
void print_line(int n)
{
	int i; /* Loop counter */

	/* Loop to print '_' n times */
	for (i = 0; i < n; i++)
	{
		_putchar('_'); /* Print underscore */
	}

	_putchar('\n'); /* Move to next line after printing */
}
