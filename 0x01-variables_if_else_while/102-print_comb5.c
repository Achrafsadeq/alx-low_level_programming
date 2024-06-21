#include <stdio.h>

/**
	* main - Entry point
	*
	* Description: Prints all possible combinations of two two-digit numbers
	*              in ascending order, separated by comma and space.
	*
	* Return: Always 0 (Success)
	*/
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
	for (j = i + 1; j < 100; j++)
	{
	putchar(i / 10 + '0'); /* Print first number's tens digit */
	putchar(i % 10 + '0'); /* Print first number's ones digit */
	putchar(' '); /* Print space */
	putchar(j / 10 + '0'); /* Print second number's tens digit */
	putchar(j % 10 + '0'); /* Print second number's ones digit */
	if (i != 98 || j != 99)
	{
	putchar(','); /* Print comma */
	putchar(' '); /* Print space */
	}
	}
	}
	putchar('\n'); /* Print new line after all combinations */
	return (0);
}
