#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to print.
 */
void print_number(int n)
{
	/* Handle negative numbers */
	unsigned int number = n;

	if (n < 0)
	{
		_putchar('-');
		number = -n;
	}

	if (number / 10)
	{
		print_number(number / 10); /* Recursively print digits */
	}

	_putchar((number % 10) + '0');
}
