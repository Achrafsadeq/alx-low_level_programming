#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Entry point, adds positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int index, sub_index, sum = 0;

	/* If no additional arguments, print 0 */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* Loop through each argument */
	for (index = 1; index < argc; index++)
	{
		/* Check if the argument contains only digits */
		for (sub_index = 0; argv[index][sub_index] != '\0'; sub_index++)
		{
			if (!isdigit(argv[index][sub_index]))
			{
				printf("Error\n");
				return (1);
			}
		}
		/* Convert argument to integer and add to sum */
		sum += atoi(argv[index]);
	}

	/* Print the sum of the positive numbers */
	printf("%d\n", sum);
	return (0);
}
