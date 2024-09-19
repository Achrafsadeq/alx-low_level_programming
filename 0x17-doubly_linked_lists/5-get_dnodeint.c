#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: A pointer to the head of the doubly linked list.
 * @index: The index of the node, starting from 0.
 *
 * Return: The address of the nth node, or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	/* Traverse the list until the index is reached or the list ends */
	while (head != NULL)
	{
		if (count == index)
			return (head);

		head = head->next;
		count++;
	}

	/* If the node does not exist, return NULL */
	return (NULL);
}
