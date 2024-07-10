#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string to measure
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	/* Base case: if the current character is the null terminator */
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		/* Recursive case: return 1 plus the length of the rest of the string */
		return (1 + _strlen_recursion(s + 1));
	}
}
