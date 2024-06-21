#include <stdio.h>

/**
	* main - Entry point
	*
	* Description: The program prints all possible different combinations
	* of two digits in ascending order, separated by ", ".
	*
	* Return: Always 0 (Success)
	*/
int main(void)
{
	int tens_dig;
	int ones_dig;

	/* Loop for tens digit (from 0 to 8)*/
	for (tens_dig = 0; tens_dig <= 8; tens_dig++)
	{
	/*Loop for ones digit (from tens_digit + 1 to 9)*/
	for (ones_dig = tens_dig + 1; ones_dig <= 9; ones_dig++)
	{
	putchar(tens_dig + '0'); /* Print tens digit */
	putchar(ones_dig + '0'); /* Print ones digit */

	if (tens_dig != 8 || ones_dig != 9)
	{
	putchar(','); /* Print comma*/
	putchar(' '); /* Print space*/
	}
	}
	}

	putchar('\n'); /* Print new line after all combinations*/

	return (0);
}
