#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_number - checks if a string contains a non-digit char
 * @str: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_number(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] < '0' || str[index] > '9')
			return (0);
	}
	return (1);
}

/**
 * string_length - returns the length of a string
 * @str: string to evaluate
 *
 * Return: the length of the string
 */
int string_length(char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;
	return (length);
}

/**
 * handle_errors - handles errors for main
 */
void handle_errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * multiply - multiplies two numbers
 * @num1: first number
 * @num2: second number
 * @len1: length of num1
 * @len2: length of num2
 */
void multiply(char *num1, char *num2, int len1, int len2)
{
	int i, j, carry, digit1, digit2, *result, total_len;
	int started = 0;

	total_len = len1 + len2;
	result = calloc(total_len, sizeof(int));
	if (!result)
		handle_errors();

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		digit1 = num1[i] - '0';
		for (j = len2 - 1; j >= 0; j--)
		{
			digit2 = num2[j] - '0';
			carry += result[i + j + 1] + (digit1 * digit2);
			result[i + j + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[i + j + 1] += carry;
	}

	for (i = 0; i < total_len; i++)
	{
		if (result[i])
			started = 1;
		if (started)
			_putchar(result[i] + '0');
	}
	if (!started)
		_putchar('0');
	_putchar('\n');

	free(result);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int len1, len2;

	if (argc != 3 || !is_number(argv[1]) || !is_number(argv[2]))
		handle_errors();

	num1 = argv[1];
	num2 = argv[2];
	len1 = string_length(num1);
	len2 = string_length(num2);

	multiply(num1, num2, len1, len2);

	return (0);
}
