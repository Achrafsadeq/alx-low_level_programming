#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to search
 * @accept: the set of bytes to search for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	/* Loop through each character in the string s */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* Check if current character in s matches any in accept */
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				/* Return pointer to the matching byte in s */
				return (s + i);
			}
		}
	}
	/* Return NULL if no matching byte is found */
	return (NULL);
}
