#include "main.h"
#include <stdio.h>

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: index position to change
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);

	unsigned long int i = 1;
	unsigned int hold = index;

	while (hold > 0)
	{
		i *= 2;
		hold--;
	}

	if ((*n >> index) & 1)
		*n &= ~i;

	return (1);
}
