#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9, excluding 2 and 4
 *                      followed by a new line
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char num;

	/* Loop through numbers from '0' to '9' */
	for (num = '0'; num <= '9'; num++)
	{
		/* Exclude printing '2' and '4' */
		if (num != '2' && num != '4')
		{
			_putchar(num);  /* Print the number */
		}
	}

	_putchar('\n');  /* Print a newline after all numbers are printed */
}
