#include <stdio.h>

/**
	* main - Entry point
	*
	* Description: The program prints all possible combinations
	* of single-digit numbers, separated by ", ".
	*
	* Return: Always 0 (Success)
	*/
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
	putchar(number + '0'); /*Print the digit*/

	if (number != 9)
	{
	putchar(',');  /* Print comma*/
	putchar(' '); /* Print space*/
	}
	}

	putchar('\n'); /*Print new line after all combinations*/

	return (0);
}
