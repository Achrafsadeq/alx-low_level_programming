#include "main.h"

/**
 * _islower - Checks for lowercase character.
 * @c: The character to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	/* Check if c is between 'a' and 'z' in ASCII */
	if (c >= 'a' && c <= 'z')
		return (1); /* Return 1 if lowercase */
	else
		return (0); /* Return 0 otherwise */
}
