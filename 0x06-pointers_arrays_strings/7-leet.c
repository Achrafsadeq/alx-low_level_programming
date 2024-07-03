#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to encode
 *
 * Return: a pointer to the resulting string
 */
char *leet(char *str)
{
	char *ptr = str;
	char leet_letters[] = "aAeEoOtTlL";
	char leet_codes[] = "4433007711";
	int i;

	while (*ptr != '\0')
	{
		for (i = 0; i < 10; i++)
		{
			if (*ptr == leet_letters[i])
			{
				*ptr = leet_codes[i];
				break;
			}
		}
		ptr++;
	}
	return (str);
}
