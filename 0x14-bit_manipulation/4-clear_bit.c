#include "main.h"

/**
 * clear_bit - Sets a bit to 0 at a specified index in an integer.
 * @n: Pointer to the integer where the bit will be cleared.
 * @index: The position of the bit to clear, starting from 0.
 *
 * Return: 1 if the bit was successfully cleared, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the pointer is NULL or if the index is out of bounds */
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	/* Clear the bit at the specified index */
	*n &= ~(1 << index);

	return (1);
}
