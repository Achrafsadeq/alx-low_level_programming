#include "main.h"

/**
* print_alphabet - Prints the alphabet in lowercase
*
* Return: void (no return value)
*/
void print_alphabet(void)
{
	char letter;  /* Declare a variable to hold each letter of the alphabet */

	/* Loop from 'a' to 'z' */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
	_putchar(letter);  /* Print the current letter using _putchar */
	}
	_putchar('\n');  /* Print a newline character after printing all letters */
}
