#include <stdio.h>

/**
	* main - Entry point
	*
	* Description: The program will print the alphabet
	* in lowercase and then in uppercase using the putchar function.
	*
	* Return: Always 0 (Success)
	*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');

	return (0);
}
