#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	/* Initialize element counter */
	size_t element_count = 0;

	while (h != NULL)
	{
		element_count++;
		h = h->next;
	}

	/* Return the total number of elements */
	return (element_count);
}
