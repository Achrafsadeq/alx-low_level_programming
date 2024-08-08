#include "main.h"

/**
 * get_endianness - Determines the endianness of the system
 *
 * Return: 0 if the system is big endian, 1 if the system is little endian
 */
int get_endianness(void)
{
	unsigned int test_value = 1;
	char *byte_pointer = (char *) &test_value;

	/* Check the first byte of test_value */
	if (*byte_pointer)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

