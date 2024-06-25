#include <stdio.h>

/**
 * print_fibonacci - prints the first n Fibonacci numbers,
 * starting with 1 and 2
 * @n: the number of Fibonacci numbers to print
 */
void print_fibonacci(int n)
{
	long int fib[n]; /* Array to store Fibonacci numbers */
	int i;

	/* Initialize the first two Fibonacci numbers */
	fib[0] = 1;
	fib[1] = 2;

	/* Calculate the rest of the Fibonacci numbers */
	for (i = 2; i < n; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	/* Print the Fibonacci numbers */
	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%ld", fib[i]);
		else
			printf(", %ld", fib[i]);
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

	return (0);
}
