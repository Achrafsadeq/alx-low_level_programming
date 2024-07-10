#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to compute the square root of.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural
 * square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1); /* Negative numbers don't have a natural square root */
	}
	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - Helper function to find the natural square root of a number.
 * @n: The number to compute the square root of.
 * @i: The current guess for the square root.
 *
 * Return: The natural square root of n if it exists, or -1 if it does not.
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
	{
		return (i); /* Found the natural square root */
	}
	if (i * i > n)
	{
		return (-1); /* No natural square root exists */
	}
	return (sqrt_helper(n, i + 1)); /* Try the next guess */
}
