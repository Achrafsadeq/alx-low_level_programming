#include "main.h"

/**
* main - Entry point of the program
*
* Description: Prints "_putchar" followed by a new line
* using the _putchar function.
*
* Return: 0 on success
*/
int main(void)
{
	/* The string to be printed */
	char *str = "_putchar";
	int i = 0;

	/* Print each character of the string */
	while (str[i])
	{
	_putchar(str[i]);
	i++;
	}

	/* Print a newline character */
	_putchar('\n');

	return (0);
}
