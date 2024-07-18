#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/* Function prototypes */
int _putchar(char c);
void print_error(void);
int is_digit_string(char *str);
int _strlen(char *s);
char *multiply_strings(char *num1, char *num2);

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *result;

	/* Validate number of arguments */
	if (argc != 3)
	{
		print_error();
		return (98);
	}

	/* Validate arguments are digits */
	if (!is_digit_string(argv[1]) || !is_digit_string(argv[2]))
	{
		print_error();
		return (98);
	}

	/* Perform multiplication */
	result = multiply_strings(argv[1], argv[2]);
	if (result == NULL)
	{
		print_error();
		return (98);
	}

	/* Print the result */
	while (*result == '0' && *(result + 1) != '\0')
		result++;
	while (*result != '\0')
	{
		_putchar(*result);
		result++;
	}
	_putchar('\n');

	/* Free dynamically allocated memory */
	free(result);

	return (0);
}

/**
 * print_error - Prints "Error" followed by a new line to stdout
 */
void print_error(void)
{
	char *error = "Error\n";

	while (*error != '\0')
	{
		_putchar(*error);
		error++;
	}
}

/**
 * is_digit_string - Checks if a string contains only digits
 * @str: The string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_digit_string(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * _strlen - Returns the length of a string
 * @s: The string to measure
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}

/**
 * multiply_strings - Multiplies two strings representing numbers
 * @num1: The first number as a string
 * @num2: The second number as a string
 *
 * Return: Pointer to the result of the multiplication as a string
 */
char *multiply_strings(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int len_result = len1 + len2;
	int *result;
	int i, j, carry, digit;

	result = calloc(len_result, sizeof(int));
	if (result == NULL)
		return (NULL);

	/* Perform multiplication digit by digit */
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			digit = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
			carry = digit / 10;
			result[i + j + 1] = digit % 10;
		}
		result[i + j + 1] += carry; /* Leftmost carry */
	}

	/* Convert result to string */
	char *result_str = malloc((len_result + 1) * sizeof(char));

	if (result_str == NULL)
	{
		free(result);
		return (NULL);
	}
	for (i = 0; i < len_result; i++)
		result_str[i] = result[i] + '0';
	result_str[len_result] = '\0';

	free(result);

	return (result_str);
}
