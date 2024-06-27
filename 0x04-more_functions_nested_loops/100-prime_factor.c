#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 * using efficient factorization.
 *
 * Return: Always 0
 */
int main(void)
{
	long number = 612852475143;
	long largest_prime_factor = 0;
	long factor = 2;

	/* Divide out all factors of 2 first */
	while (number % 2 == 0)
	{
		largest_prime_factor = 2;
		number /= 2;
	}

	/* Now check for odd factors starting from 3 */
	factor = 3;
	while (factor * factor <= number)
	{
		if (number % factor == 0)
		{
			largest_prime_factor = factor;
			number /= factor;
		}
		else
		{
			factor += 2; /* Only check odd factors */
		}
	}

	/* If the remaining number is a prime number greater than 2 */
	if (number > 2)
		largest_prime_factor = number;

	printf("%ld\n", largest_prime_factor);

	return (0);
}
