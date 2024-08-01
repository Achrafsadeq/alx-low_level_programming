#include <stddef.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: Pointer to the list_t list.
 *
 * Return: The number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t num_elements = 0;

	/* Traverse the linked list and count the number of elements */
	while (h)
	{
		num_elements++;
		h = h->next;
	}

	return (num_elements);
}
