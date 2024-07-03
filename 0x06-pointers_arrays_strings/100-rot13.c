#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: the string to encode
 *
 * Return: a pointer to the resulting string
 */
char *rot13(char *str)
{
	char *ptr = str;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i;

	/* Iterate through each character in the string */
	while (*ptr != '\0')
	{
		/* Check each character against the alphabet */
		for (i = 0; i < 52; i++)
		{
			if (*ptr == alphabet[i])
			{
				/* Replace the character with its ROT13 counterpart */
				*ptr = rot13[i];
				break;
			}
		}
		ptr++;
	}
	return (str);
}
