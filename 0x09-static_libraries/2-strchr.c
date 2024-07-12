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
	/* Handle the case where we're searching for the null terminator */
	if (c == '\0')
	{
		/* Traverse to the end of the string */
		while (*s != '\0')
			s++;
		return (s);
	}
	/* Traverse the string */
	while (*s != '\0')
	{
		/* If current character matches, return its address */
		if (*s == c)
			return (s);
		s++;
	}
	/* Character not found, return NULL */
	return (0);
}
