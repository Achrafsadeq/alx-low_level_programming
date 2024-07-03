#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to print
 */
void print_number(int n)
{
	unsigned int num;
	int divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	/* Find the largest power of 10 less than or equal to num */
	while (num / divisor >= 10)
	{
		divisor *= 10;
	}

	/* Print each digit */
	while (divisor != 0)
	{
		_putchar((num / divisor) % 10 + '0');
		divisor /= 10;
	}
}
