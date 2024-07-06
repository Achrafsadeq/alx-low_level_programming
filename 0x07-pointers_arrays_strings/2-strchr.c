#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to search
 * @c: the character to locate
 *
 * Return: pointer to first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	/* Iterate through the string */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* Check if the current character matches c */
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	/* Check if c is the null terminator */
	if (c == '\0')
	{
		return (&s[i]);
	}

	/* Return NULL if the character is not found */
	return (NULL);
}
