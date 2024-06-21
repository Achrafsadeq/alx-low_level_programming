#include <stdio.h>

/**
	* main - Entry point
	*
	* Description: The program will print the alphabet
	* in lowercase except for 'q' and 'e' using the putchar function.
	*
	* Return: Always 0 (Success)
	*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch != 'q' && ch != 'e')
	{
	putchar(ch);
	}
	}
	putchar('\n');

	return (0);
}
