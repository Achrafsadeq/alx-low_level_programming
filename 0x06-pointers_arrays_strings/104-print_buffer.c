#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - Prints a buffer.
 * @b: The buffer to print.
 * @size: The number of bytes to print from the buffer.
 */
void print_buffer(char *b, int size)
{
	int i, j;

	/* If size is 0 or less, print a newline and return */
	if (size <= 0)
	{
		printf("\n");
		return;
	}

	/* Iterate over the buffer in steps of 10 bytes */
	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i); /* Print the starting position in hexadecimal */

		/* Print hexadecimal content of the buffer */
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", (unsigned char)b[i + j]);
			else
				printf("  ");

			if (j % 2)
				printf(" "); /* Add an extra space after every two bytes */
		}

		/* Print ASCII content of the buffer */
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				if (isprint(b[i + j]))
					printf("%c", b[i + j]);
				else
					printf(".");
			}
		}

		printf("\n");
	}
}
