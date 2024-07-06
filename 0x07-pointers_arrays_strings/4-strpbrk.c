#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @str: the string to search
 * @chars: the set of bytes to search for
 *
 * Return: a pointer to the byte in str that matches one of the bytes in chars,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *str, char *chars)
{
	int str_index, chars_index;

	for (str_index = 0; str[str_index] != '\0'; str_index++)
	{
		for (chars_index = 0; chars[chars_index] != '\0'; chars_index++)
		{
			if (str[str_index] == chars[chars_index])
				return (&str[str_index]);
		}
	}

	return (NULL);
}
