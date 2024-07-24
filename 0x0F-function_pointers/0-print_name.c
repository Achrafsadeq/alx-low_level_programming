#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a given function pointer
 * @name: The name to be printed
 * @f: A pointer to a function that takes a char pointer as argument
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
