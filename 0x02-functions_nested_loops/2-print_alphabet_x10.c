#include "main.h"

/**
* print_alphabet_x10 - Prints the alphabet in lowercase 10 times
*
* Return: void
*/

void print_alphabet_x10(void)
{
	int i; /* Variable for loop iteration */

	for (i = 0; i < 10; i++) /* Loop 10 times for each line  */
	{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++) /* Loop through 'a' to 'z' */
	{
	_putchar(letter); /* Print the current letter using _putchar */
	}
	_putchar('\n'); /* Print a newline after printing the alphabet */

	}
}
