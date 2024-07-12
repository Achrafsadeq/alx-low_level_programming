#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 *
 * Description: Counts characters in string until null terminator is reached.
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
