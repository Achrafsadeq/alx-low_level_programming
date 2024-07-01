#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string input parameter
 * Return: converted integer from string
 */

int _atoi(char *s)
{
	/* Initialize variables */
	unsigned int num = 0;
	int sign = 1;
	int found_num = 0;

	/* Traverse the string */
	while (*s)
	{
		/* Check for sign */
		if (*s == '-' && !found_num)
		{
			sign *= -1;
		}
		/* Check for digits and convert */
		else if (*s >= '0' && *s <= '9')
		{
			found_num = 1; /* Mark that we've found a number */
			num = (num * 10) + (*s - '0');
		}
		/* Break if non-digit character found after a number */
		else if (found_num)
		{
			break;
		}
		s++;
	}

	/* Return the result with the correct sign */
	return (num * sign);
}
