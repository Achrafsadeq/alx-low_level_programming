#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Computes the sum of all natural numbers
 *              below 1024 that are multiples of 3 or 5.
 *              Prints the sum followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum = 0;
	int i;

	/* Iterate through numbers from 1 to 1023 (1024 excluded) */
	for (i = 1; i < 1024; i++)
	{
		/* Check if the number is a multiple of 3 or 5 */
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	/* Output the computed sum */
	printf("%d\n", sum);

	return (0);
}
