#include "main.h"

/**
 * print_binary - Converts a decimal number to binary and prints it.
 * @n: The decimal number to be converted.
 *
 * Description: This function prints the binary representation of the
 * given number. It avoids leading zeros by using a flag to start
 * printing after the first '1' is found.
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int shifts;
	int flag = 0;

	/* Special case for 0 */
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	/* Calculate the number of bits required to represent n */
	for (temp = n, shifts = 0; (temp >>= 1) > 0; shifts++)
		;

	/* Print the binary representation */
	while (shifts >= 0)
	{
		/* Check if the current bit is set */
		if ((n >> shifts) & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}

		shifts--;
	}
}
