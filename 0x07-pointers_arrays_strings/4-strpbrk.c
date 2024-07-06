#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to be searched
 * @accept: The string containing the bytes to look for
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int str, acc;

	for (str = 0; s[str] != '\0'; str++)
	{
		/* Iterate through each character in the main string */
		for (acc = 0; accept[acc] != '\0'; acc++)
		{
			/* Compare current character with each character in accept string */
			if (s[str] == accept[acc])
				return (s + str);
		}
	}

	return (NULL);
}
