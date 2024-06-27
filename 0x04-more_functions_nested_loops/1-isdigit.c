#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: the character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	/* Start of _isdigit function */
	while (1)
	{
		if (c >= '0' && c <= '9')
			return (1);
		else
			return (0);
	}
	/* End of _isdigit function */
}
