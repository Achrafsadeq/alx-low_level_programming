#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: Argument count
 * @argv: Argument vector (array of arguments)
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int number1, number2, product;

	/* Check if exactly two arguments are passed */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert arguments to integers */
	number1 = atoi(argv[1]);
	number2 = atoi(argv[2]);

	/* Calculate the product */
	product = number1 * number2;

	/* Print the product */
	printf("%d\n", product);

	return (0);
}
