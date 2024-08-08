#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if:
 *         - there is one or more chars in the string b that is not 0 or 1
 *         - b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int index;

	/* Check if the input string is NULL */
	if (b == NULL)
		return (0);

	/* Iterate through each character in the string */
	for (index = 0; b[index] != '\0'; index++)
	{
		/* If the character is not '0' or '1', return 0 */
		if (b[index] != '0' && b[index] != '1')
			return (0);

		result = result * 2 + (b[index] - '0');
	}

	return (result);
}
