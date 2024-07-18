#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated with malloc(old_size).
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes of the new memory block.
 *
 * Return: A pointer to the newly allocated memory, or NULL if new_size is 0
 *         and ptr is not NULL or if malloc fails.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size, index;

	/* If new_size == old_size, do not do anything and return ptr */
	if (new_size == old_size)
		return (ptr);

	/* If ptr is NULL, then the call is equivalent to malloc(new_size) */
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	/*If new_size is 0 and ptr is not NULL, then it's like free(ptr) */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* Allocate new memory block */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	/* Copy the contents to the newly allocated space */
	min_size = (old_size < new_size) ? old_size : new_size;
	for (index = 0; index < min_size; index++)
		((char *)new_ptr)[index] = ((char *)ptr)[index];

	/* Free the old memory block */
	free(ptr);

	/* Return the pointer to the newly allocated memory */
	return (new_ptr);
}
