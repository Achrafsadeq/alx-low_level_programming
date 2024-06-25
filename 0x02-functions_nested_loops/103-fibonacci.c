#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: (0) Always 0 (Success)
 */
int main(void)
{
	long int fib1 = 1;    /* First Fibonacci number */
	long int fib2 = 2;    /* Second Fibonacci number */
	long int current_fib; /* Current Fibonacci number */
	long int sum_even = 0; /* Sum of even-valued terms */

	/* Initial terms are known to be 1 and 2 */
	sum_even = fib2;

	/* Calculate Fibonacci sequence and sum even terms */
	while (fib2 <= 4000000)
	{
		current_fib = fib1 + fib2;
		if (current_fib % 2 == 0)
		{
			sum_even += current_fib;
		}

		/* Move to the next Fibonacci numbers */
		fib1 = fib2;
		fib2 = current_fib;
	}

	/* Print the sum of even-valued Fibonacci terms */
	printf("%ld\n", sum_even);

	return (0); /* Return 0 to indicate success */
}
