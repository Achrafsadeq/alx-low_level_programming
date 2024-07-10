#include "main.h"

/**
 * sqrt_find - Helper function to recursively find the square root.
 * @n: Number to find the square root of.
 * @current: Current guess for the square root.
 *
 * Return: The square root if found, otherwise -1.
 */
int sqrt_find(int n, int current)
{
	if (current * current == n)
	{
		return (current);
	}
	if (current * current > n)
	{
		return (-1);
	}
	return (sqrt_find(n, current + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Number to find the square root of.
 *
 * Return: The natural square root, or -1 if not found.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1); /* Negative numbers don't have a natural square root */
	}
	return (sqrt_find(n, 1)); /* Start with current guess 1 */
}
