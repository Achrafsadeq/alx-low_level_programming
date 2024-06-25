#include "main.h"

/**
 * print_sign - Checks the sign of a number.
 * @n: The number to be checked
 *
 * Return: 1 if n is greater than zero,
 * 0 if n is zero, -1 if n is less than zero
 */
int print_sign(int n)
{
	/* Check if n is greater than zero */
	if (n > 0)
	{
		_putchar('+'); /* Print '+' */
		return (1);    /* Return 1 indicating positive */
	}
	/* Check if n is zero */
	else if (n == 0)
	{
		_putchar('0'); /* Print '0' */
		return (0);    /* Return 0 indicating zero */
	}
	else
	{
		_putchar('-'); /* Print '-' */
		return (-1);   /* Return -1 indicating negative */
	}
}
