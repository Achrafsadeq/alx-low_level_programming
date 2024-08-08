#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given bit position.
 * @n: Pointer to the number to modify.
 * @bit_position: The position of the bit to set, starting from 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int bit_position)
{
	/* Check if bit_position is out of the range of unsigned long int */
	if (bit_position >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Set the bit at the given bit_position to 1 */
	*n |= (1UL << bit_position);

	return (1);
}
