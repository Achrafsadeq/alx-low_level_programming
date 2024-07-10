#include "main.h"

/**
 * factorial - Computes the factorial of a given number
 * @n: The number for which to compute the factorial
 *
 * Return: The factorial of n if n is non-negative, -1 if n is negative
 */
int factorial(int n)
{
	/* Check for error condition */
	if (n < 0)
	{
		return (-1);
	}

	/* Base case: factorial of 0 is 1 */
	if (n == 0)
	{
		return (1);
	}

	/* Recursive case: n! = n * (n-1)! */
	return (n * factorial(n - 1));
}
