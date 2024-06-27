#include "main.h"

/**
 * print_triangle - prints a triangle pattern of '#' characters
 *                  with a specified size.
 * @size: the size of the triangle (number of lines)
 */
void print_triangle(int size)
{
	int line_number, spaces, hashes;

	/* Check if size is less than or equal to 0 */
	if (size <= 0)
	{
		_putchar('\n'); /* Print a newline and return if size is invalid */
	}
	else
	{
		/* Iterate through each line of the triangle */
		for (line_number = 1; line_number <= size; line_number++)
		{
			/* Print leading spaces */
			for (spaces = 1; spaces <= size - line_number; spaces++)
			{
				_putchar(' ');
			}

			/* Print hashes for the current line */
			for (hashes = 1; hashes <= line_number; hashes++)
			{
				_putchar('#');
			}

			_putchar('\n'); /* Move to the next line after printing hashes */
		}
	}
}
