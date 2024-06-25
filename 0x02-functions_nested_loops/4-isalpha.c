#include "main.h"

/**
 * _isalpha - Checks for alphabetic character.
 * @c: The character to be checked
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	/* Check if c is a lowercase letter or an uppercase letter */
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1); /* Return 1 if alphabetic */
	else
		return (0); /* Return 0 otherwise */
}
