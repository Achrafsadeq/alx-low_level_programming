#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * This function prints the opcodes of the main function itself.
 *
 * @argc: number of arguments passed to the program.
 * @argv: array of strings representing the arguments passed to the program.
 *
 * Return: Always 0 on success. Exits with status 1 or 2 on error conditions.
 */
int main(int argc, char *argv[])
{
	int num_bytes, i;
	char *main_addr;

	/* Check if the correct number of arguments is provided */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert the second argument to an integer */
	num_bytes = atoi(argv[1]);

	/* Check if the number of bytes is negative */
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	/* Get the address of the main function */
	main_addr = (char *)main;

	/* Print the opcodes in hexadecimal format */
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02hhx", main_addr[i]);

		/* Add a space between bytes, except after the last byte */
		if (i < num_bytes - 1)
			printf(" ");
	}

	printf("\n");

	return (0);
}
