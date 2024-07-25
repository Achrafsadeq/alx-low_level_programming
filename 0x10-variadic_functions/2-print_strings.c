#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *str;
	unsigned int index;

	va_start(args, n);
	/* Loop through all strings */
	for (index = 0; index < n; index++)
	{
		str = va_arg(args, char *);
		/* Check if the string is NULL and print accordingly */
		if (!str)
			printf("(nil)");
		else
			printf("%s", str);
		/* Print separator if it's not the last string and separator exists */
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
