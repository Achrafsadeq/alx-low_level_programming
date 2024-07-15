#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: number of arguments.
 * @av: array of arguments.
 *
 * Return: pointer to the new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int arg_index, char_index, str_index, len;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length needed */
	len = 0;
	for (arg_index = 0; arg_index < ac; arg_index++)
	{
		for (char_index = 0; av[arg_index][char_index] != '\0'; char_index++)
			len++;
		len++; /* for the newline character */
	}
	len++; /* for the null terminator */

	/* Allocate memory for the new string */
	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);

	/* Concatenate arguments */
	str_index = 0;
	for (arg_index = 0; arg_index < ac; arg_index++)
	{
		for (char_index = 0; av[arg_index][char_index] != '\0'; char_index++)
		{
			str[str_index++] = av[arg_index][char_index];
		}
		str[str_index++] = '\n';
	}
	str[str_index] = '\0'; /* Null terminator */

	return (str);
}
