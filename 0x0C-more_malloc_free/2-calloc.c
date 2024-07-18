#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array of nmemb elements of size bytes each
 * @nmemb: The number of elements.
 * @size: The size of each element.
 *
 * Return: A pointer to the allocated memory, or NULL if nmemb or size is 0
 *         or if malloc fails. The memory is set to zero.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, total_size;

	/* If nmemb or size is 0, return NULL */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Calculate the total size of the memory to be allocated */
	total_size = nmemb * size;

	/* Allocate the memory */
	ptr = malloc(total_size);

	/* If malloc fails, return NULL */
	if (ptr == NULL)
		return (NULL);

	/* Initialize the allocated memory to zero */
	for (i = 0; i < total_size; i++)
		ptr[i] = 0;

	/* Return the pointer to the allocated memory */
	return (ptr);
}
