#include "main.h"

/**
 * _strcat - concatenates the string pointed to by @src to
 * the end of the string pointed to by @dest
 * @dest: the destination string to which @src will be appended
 * @src: the source string to be concatenated to @dest
 *
 * Return: a pointer to the resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i;

	/* Find the length of dest string */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Append src to dest */
	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	/* Add terminating null byte */
	dest[dest_len + i] = '\0';

	return (dest);
}
