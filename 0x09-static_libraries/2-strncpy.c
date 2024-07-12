#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: the destination buffer where the content is to be copied
 * @src: the source string to be copied
 * @n: the number of bytes to be copied from @src
 *
 * Return: a pointer to the destination string @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy at most n bytes from src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* Pad the rest of dest with null bytes if necessary */
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
