#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer to compute absolute value of an int
 *
 * Return: Absolute value of @n
 */
int _abs(int n)
{
	/* Check if n is negative */
	if (n < 0)
		return (-n); /* Return the negative of n */
	else
		return (n); /* Return n */
}
