#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint_safe - Frees a listint_t list safely (can handle loops).
 * @h: Pointer to the pointer to the head of the linked list.
 *
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;
	size_t nodes = 0;

	/* Check if the list is empty */
	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		nodes++;

		/* Break the loop if a cycle is detected */
		if (current <= next)
			break;

		current = next;
	}

	/* Set the head to NULL to indicate the list is empty */
	*h = NULL;

	return (nodes);
}
