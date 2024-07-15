#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL if insufficient memory
 *         was available or if str is NULL
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	/* Calculate the length of the input string */
	while (str[len])
		len++;

	/* Allocate memory for the duplicate string */
	dup = malloc((len + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);

	/* Copy the string */
	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}
