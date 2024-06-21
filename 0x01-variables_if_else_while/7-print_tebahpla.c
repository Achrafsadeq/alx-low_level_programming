#include <stdio.h>

/**
	* main - Entry point
	*
	* Description: The program prints the lowercase alphabet
	* in reverse order using the putchar function.
	*
	* Return: Always 0 (Success)
	*/
int main(void)
{
	char alph;

	/* Loop to print alphabet in reverse order*/
	for (alph = 'z'; alph >= 'a'; alph--)
	{
	putchar(alph);
	}
	putchar('\n'); /* New line after printing the alphabet in reverse*/

	return (0);
}
