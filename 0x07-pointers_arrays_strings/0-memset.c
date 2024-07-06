#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: constant byte to fill the memory with
 * @n: number of bytes to fill
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	/* Use a while loop instead of a for loop */
	unsigned int count = 0;

	while (count < n)
	{
		/* Fill memory and increment counter */
		s[count] = b;
		count++;
	}

	return (s);
}
