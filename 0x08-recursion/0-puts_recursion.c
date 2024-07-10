#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to be printed.
 *
 * Description: Recursively prints each character of a string
 * followed by a new line.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return; /* End of string reached */
	}
	_putchar(*s); /* Print current character */
	_puts_recursion(s + 1); /* Recursive call with next character */
}
