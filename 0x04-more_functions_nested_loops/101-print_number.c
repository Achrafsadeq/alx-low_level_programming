#include "main.h"

/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to print
 */
void print_number(int n)
{
	/* Handle negative numbers */
	if (n < 0)
	{
		_putchar('-');
		n = -n; /* Make n positive for easier handling */
	}

	/* Base case: If n is a single digit number */
	if (n / 10 != 0)
	{
		/* Recursively call print_number to handle the rest of the digits */
		print_number(n / 10);
	}

	/* Print the last digit */
	_putchar(n % 10 + '0'); /* Convert digit to character and print */
}
