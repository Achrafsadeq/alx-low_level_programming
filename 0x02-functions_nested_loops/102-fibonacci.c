#include <stdio.h>

/**
 * print_fibonacci - prints the first n Fibonacci numbers,
 * starting with 1 and 2
 * @n: the number of Fibonacci numbers to print
 */
void print_fibonacci(int n)
{
	long int fib1 = 1; /* First Fibonacci number */
	long int fib2 = 2; /* Second Fibonacci number */
	long int next_fib; /* Variable to calculate the next Fibonacci number */
	int i;

	if (n <= 0)
	{
		printf("\n");
		return;
	}

	if (n == 1)
	{
		printf("%ld\n", fib1);
		return;
	}

	/* Print the first two Fibonacci numbers */
	printf("%ld, %ld", fib1, fib2);

	/* Calculate and print the rest of the Fibonacci numbers */
	for (i = 3; i <= n; i++)
	{
		next_fib = fib1 + fib2;
		printf(", %ld", next_fib);

		/* Update the previous two Fibonacci numbers */
		fib1 = fib2;
		fib2 = next_fib;
	}

	printf("\n"); /* Print a new line at the end */
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Call the function to print the first 50 Fibonacci numbers */
	print_fibonacci(50);

	return (0); /* Return 0 to indicate success */
}
