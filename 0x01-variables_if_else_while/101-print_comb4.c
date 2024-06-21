#include <stdio.h>

/**
	* main - Entry point
	*
	* Description: The program prints all possible different combinations
	* of three digits in ascending order, separated by ", ".
	*
	* Return: Always 0 (Success)
	*/
int main(void)
{
	int hundreds_dig, tens_dig, ones_dig;

	for (hundreds_dig = 0; hundreds_dig <= 7; hundreds_dig++)
	{
	for (tens_dig = hundreds_dig + 1; tens_dig <= 8; tens_dig++)
	{
	for (ones_dig = tens_dig + 1; ones_dig <= 9; ones_dig++)
	{
	putchar(hundreds_dig + '0'); /* Print hundreds digit */
	putchar(tens_dig + '0');     /* Print tens digit */
	putchar(ones_dig + '0');     /* Print ones digit */

	if (hundreds_dig != 7 || tens_dig != 8 || ones_dig != 9)
	{
	putchar(','); /* Print comma */
	putchar(' '); /* Print space */
	}
	}
	}
	}

	putchar('\n'); /* Print new line after all combinations*/

	return (0);
}
