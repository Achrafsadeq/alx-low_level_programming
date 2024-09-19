#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: A pointer to the pointer to the head of the doubly linked list.
 * @idx: The index where the new node should be added. Index starts at 0.
 * @n: The data (n) to be added in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int i = 0;

	/* Special case: insert at the beginning */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* Allocate the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	/* Traverse the list to find the position to insert the new node */
	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	/* If the index is out of range, free the node and return NULL */
	if (temp == NULL || (temp->next == NULL && i != idx - 1))
	{
		free(new_node);
		return (NULL);
	}

	/* Insert the new node at the given index */
	if (temp->next == NULL) /* Insert at the end */
		return (add_dnodeint_end(h, n));

	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
