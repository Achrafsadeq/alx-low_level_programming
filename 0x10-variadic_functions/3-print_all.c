#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * @...: Variable number of arguments to be printed.
 *
 * Description: This function prints a variable number of arguments
 * based on the format string provided.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str, *sep = "";
	unsigned int index = 0;

	va_start(args, format);
	/* Loop through the format string */
	while (format && format[index])
	{
		switch (format[index])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				index++;
				continue;
		}
		sep = ", ";
		index++;
	}
	/* Print a newline and clean up */
	printf("\n");
	va_end(args);
}
