#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The result of x raised to the power of y,
 * or -1 if y is lower than 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1); /* Return -1 if exponent is negative */
	}
	if (y == 0)
	{
		/* Base case: any number raised to the power of 0 is 1 */
		return (1);
	}
	return (x * _pow_recursion(x, y - 1)); /* Recursive case */
}
