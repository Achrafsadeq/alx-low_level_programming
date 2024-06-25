#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to extract the last digit.
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	/* Compute the last digit (absolute value for negative numbers) */
	last_digit = n % 10;
	if (last_digit < 0)
		last_digit = -last_digit;

	/* Print the last digit */
	_putchar(last_digit + '0');

	/* Return the last digit */
	return (last_digit);
}
