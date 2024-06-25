#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 *
 * Description: This function prints all natural numbers from n to 98,
 *              in order, followed by a new line. Numbers are separated
 *              by a comma and a space. If the number is 98, it is followed
 *              by an exclamation mark.
 */
void print_to_98(int n)
{
	/* Print the current number and check if it is 98 */
	if (n == 98)
	{
		printf("98!\n");
		return;
	}
	else
	{
		printf("%d, ", n);
	}

	/* Recursive call to move towards 98 */
	if (n < 98)
	{
		print_to_98(n + 1);  /* Increment the number if it's less than 98 */
	}
	else
	{
		print_to_98(n - 1);  /* Decrement the number if it's greater than 98 */
	}
}
