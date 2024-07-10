#include "main.h"

int check_palindrome(char *s, int start, int end);
int _strlen_recursion(char *s);

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len;

	if (*s == '\0')
		return (1);

	len = _strlen_recursion(s);
	return (check_palindrome(s, 0, len - 1));
}

/**
 * check_palindrome - Recursively checks if a string is a palindrome
 * @s: The string to check
 * @start: The starting index
 * @end: The ending index
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string to measure
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
