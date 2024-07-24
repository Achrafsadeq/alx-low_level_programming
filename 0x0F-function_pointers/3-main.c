#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that performs simple operations
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int);

	/* Check if the correct number of arguments is provided */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* Convert the arguments to integers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	/* Get the appropriate function for the operation */
	operation = get_op_func(argv[2]);

	/* Check if a valid operation function was found */
	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}

	/* Perform the operation and print the result */
	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}
