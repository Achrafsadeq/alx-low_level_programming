#include "main.h"

/**
 * _puts - prints a string followed by a new line to stdout
 * @str: pointer to the string
 *
 * Description: Outputs string characters one by one, then adds newline.
 * Return: No return value (void function).
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
