#include "main.h"

/**
 * _strncat - concatenates at most n bytes from src to dest
 * @dest: the destination string to which @src will be appended
 * @src: the source string to be concatenated to @dest
 * @n: the maximum number of bytes to be appended from @src
 *
 * Return: a pointer to the resulting string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	/* Find the length of dest string */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Append src to dest, at most n bytes */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	/* Add terminating null byte */
	dest[dest_len + i] = '\0';

	return (dest);
}
