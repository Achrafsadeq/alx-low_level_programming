#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to print
 */
void print_number(int n)
{
	/* Handle negative numbers */
	if (n < 0)
	{
		_putchar('-');
		n = -n; /* Convert to positive */
	}

	/* Recursive call to handle all digits before the last one */
	if (n / 10)
		print_number(n / 10);

	/* Print the last digit */
	_putchar(n % 10 + '0');
}
