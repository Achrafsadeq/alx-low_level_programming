#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: A pointer to the head of the doubly linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	/* Traverse the list and free each node */
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
