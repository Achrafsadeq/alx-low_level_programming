#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
	/* Base case: if current character is null, we've reached the end */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	/* Recursive case: count this character and move to the next */
	_putchar(*s);
	_puts_recursion(s + 1);
}
