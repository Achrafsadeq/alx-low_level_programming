#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index in a
 * doubly linked list.
 * @head: A pointer to the pointer to the head of the doubly linked list.
 * @index: The index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	/* Special case: deleting the first node */
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	/* Traverse to the node at the given index */
	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	/* If the node doesn't exist */
	if (temp == NULL)
		return (-1);

	/* Unlink the node from the list */
	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	if (temp->prev != NULL)
		temp->prev->next = temp->next;

	/* Free the node */
	free(temp);
	return (1);
}
