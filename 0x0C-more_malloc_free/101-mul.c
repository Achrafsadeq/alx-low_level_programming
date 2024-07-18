#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int get_length(char *str);
int *allocate_result(int len1, int len2);
void perform_multiplication(char *num1, char *num2, int *result,
		int len1, int len2);
char *create_result_string(int *result, int len1, int len2);

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	char *result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	result = multiply(argv[1], argv[2]);
	print_number(atoi(result));
	_putchar('\n');
	free(result);

	return (0);
}

/**
 * is_digit - checks if a string contains only digits
 * @s: string to check
 * Return: 1 if only digits, 0 otherwise
 */
int is_digit(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

/**
 * print_number - prints an unsigned long integer
 * @n: number to print
 */
void print_number(unsigned long n)
{
	if (n / 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * multiply - multiplies two numbers represented as strings
 * @num1: first number
 * @num2: second number
 * Return: result as a string
 */
char *multiply(char *num1, char *num2)
{
	int len1, len2;
	int *result;
	char *str_result;

	len1 = get_length(num1);
	len2 = get_length(num2);

	result = allocate_result(len1, len2);
	perform_multiplication(num1, num2, result, len1, len2);
	str_result = create_result_string(result, len1, len2);

	free(result);
	return (str_result);
}

/**
 * get_length - gets the length of a string
 * @str: string to measure
 * Return: length of string
 */
int get_length(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
 * allocate_result - allocates memory for result array
 * @len1: length of first number
 * @len2: length of second number
 * Return: pointer to allocated memory
 */
int *allocate_result(int len1, int len2)
{
	int *result = calloc(len1 + len2, sizeof(int));

	if (!result)
		exit(98);
	return (result);
}

/**
 * perform_multiplication - performs the multiplication of two numbers
 * @num1: first number
 * @num2: second number
 * @result: array to store the result
 * @len1: length of first number
 * @len2: length of second number
 */
void perform_multiplication(char *num1, char *num2, int *result,
		int len1, int len2)
{
	int i, j, n1, n2, sum;

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			n1 = num1[i] - '0';
			n2 = num2[j] - '0';
			sum = result[i + j + 1] + (n1 * n2);
			result[i + j + 1] = sum % 10;
			result[i + j] += sum / 10;
		}
	}
}

/**
 * create_result_string - creates a string from the result array
 * @result: array containing the result
 * @len1: length of first number
 * @len2: length of second number
 * Return: result as a string
 */
char *create_result_string(int *result, int len1, int len2)
{
	char *str_result;
	int i = 0, j = 0;

	str_result = malloc(len1 + len2 + 1);
	if (!str_result)
		exit(98);

	while (i < len1 + len2 && result[i] == 0)
		i++;

	while (i < len1 + len2)
		str_result[j++] = result[i++] + '0';
	str_result[j] = '\0';

	return (str_result);
}
