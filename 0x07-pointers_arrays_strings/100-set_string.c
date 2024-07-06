#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Double pointer to the string to be set.
 * @to: Pointer to the string to set the value to.
 *
 * Description: Sets the value of the pointer pointed to by the double pointer
 * to the value of the second pointer.
 */
void set_string(char **s, char *to)
{
	/* Set the value of the pointer pointed to by 's' to point to 'to' */
	*s = to;
}
