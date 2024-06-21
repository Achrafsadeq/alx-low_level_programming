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
	int num1_tens, num1_ones, num2_tens, num2_ones;

	for (num1_tens = 0; num1_tens <= 9; num1_tens++)
	{
	for (num1_ones = 0; num1_ones <= 9; num1_ones++)
	{
	for (num2_tens = num1_tens; num2_tens <= 9; num2_tens++)
	{
	/* Start from num1_ones + 1  */
	int start_num2_ones = (num2_tens == num1_tens) ? num1_ones + 1 : 0;

	for (num2_ones = start_num2_ones; num2_ones <= 9; num2_ones++)
	{
	if (!(num1_tens == num2_tens && num1_ones == num2_ones))
	{
	putchar(num1_tens + '0');    /* Print first number's tens digit */
	putchar(num1_ones + '0');    /* Print first number's ones digit */
	putchar(' ');                /* Print space */
	putchar(num2_tens + '0');    /* Print second number's tens digit */
	putchar(num2_ones + '0');    /* Print second number's ones digit */

	if (!(num1_tens == 9 && num1_ones == 9 && num2_tens == 9 && num2_ones == 9))
	{
	putchar(',');            /* Print comma */
	putchar(' ');            /* Print space */
	}
	}
	}
	}
	}
	}

	putchar('\n'); /* Print new line after all combinations */

	return (0);
}
