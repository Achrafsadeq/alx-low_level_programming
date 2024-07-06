#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to copy
 *
 * Return: pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	/* Loop through source memory, copying each byte to destination */
	for (count = 0; count < n; count++)
	{
		dest[count] = src[count];
	}

	/* Return the pointer to the destination memory area */
	return (dest);
}
