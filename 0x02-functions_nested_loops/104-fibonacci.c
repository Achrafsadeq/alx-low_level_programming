#include <stdio.h>

/**
	* getNumLength - Returns the number of digits in an integer.
	*
	* @num: integer number
	* Return: number of digits
	*/
int getNumLength(int num)
{
	int length = 0;

	if (num == 0)
	return (1);

	while (num != 0)
	{
	num /= 10;
	length++;
	}

	return (length);
}

/**
	* main - Entry point
	*
	* Description: Prints the first 98 Fibonacci numbers starting with 1 and 2,
	*              separated by commas, followed by a new line.
	* Return: Always 0 (Success)
	*/
int main(void)
{
	int count;
	unsigned long fib1 = 1, fib2 = 2, next_fib;
	unsigned long fib1_overflow = 0, fib2_overflow = 0, sum_overflow = 0;
	unsigned long max_overflow = 100000000; /* Max overflow value */
	int initial_zeros;

	/* Print Fibonacci sequence */
	for (count = 1; count <= 98; count++)
	{
	if (fib1_overflow > 0)
	printf("%lu", fib1_overflow);

	initial_zeros = getNumLength(max_overflow) - 1 - getNumLength(fib1);

	while (fib1_overflow > 0 && initial_zeros > 0)
	{
	printf("%d", 0);
	initial_zeros--;
	}

	printf("%lu", fib1);

	/* Calculate next Fibonacci numbers */
	next_fib = (fib1 + fib2) % max_overflow;
	sum_overflow = fib1_overflow + fib2_overflow + (fib1 + fib2) / max_overflow;

	/* Update Fibonacci variables */
	fib1 = fib2;
	fib1_overflow = fib2_overflow;
	fib2 = next_fib;
	fib2_overflow = sum_overflow;

	/* Print comma and space except for the last number */
	if (count != 98)
	printf(", ");
	else
	printf("\n");
	}

	return (0);
}
