#include "main.h"

/**
 * print_numbers - function that prints all numbers from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	char c = '0';

	/* Print numbers from '0' to '9' */
	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
