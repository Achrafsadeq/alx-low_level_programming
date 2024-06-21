#include <stdio.h>

/**
	* main - Entry point
	*
	* Description: The program prints all numbers of base 16
	* in lowercase, followed by a new line.
	*
	* Return: Always 0 (Success)
	*/
int main(void)
{
	char numbase;

	/* Print digits '0' to '9'*/
	for (numbase = '0'; numbase <= '9'; numbase++)
	{
	putchar(numbase);
	}

	/*Print characters 'a' to 'f'*/
	for (numbase = 'a'; numbase <= 'f'; numbase++)
	{
	putchar(numbase);
	}

	putchar('\n'); /* New line after printing all hexadecimal digits*/

	return (0);
}
