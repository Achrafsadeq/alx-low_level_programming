#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - Selects the correct function to perform the operation
 * @s: The operator passed as argument
 * Return: Pointer to the function that corresponds to the operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int index = 0;

	/* Iterate through the ops array to find the matching operator */
	while (ops[index].op)
	{
		if (strcmp(ops[index].op, s) == 0)
			return (ops[index].f);
		index++;
	}
	return (NULL);
}
