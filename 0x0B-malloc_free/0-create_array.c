#include <stdlib.h>

/**
 * create_array - Crafts a char array, populating it with a given char
 * @size: Desired array size
 * @c: Character to populate the array
 *
 * Return: Array pointer, or NULL if creation fails or size is zero
 */
char *create_array(unsigned int size, char c)
{
	char *magic_array;

	if (!size)
		return (NULL);

	magic_array = malloc(size * sizeof(char));

	if (!magic_array)
		return (NULL);

	while (size--)
		magic_array[size] = c;

	return (magic_array);
}
