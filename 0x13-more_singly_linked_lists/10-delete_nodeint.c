#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index.
 * @head: Pointer to the pointer to the head of the linked list.
 * @index: The index of the node that should be deleted.
 *
 * Return: 1 if succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *node_to_delete;
	unsigned int current_index;

	if (head == NULL || *head == NULL)
		return (-1);

	/* Handle deleting the head node */
	if (index == 0)
	{
		node_to_delete = *head;
		*head = (*head)->next;
		free(node_to_delete);
		return (1);
	}

	/* Traverse the list to find the node before the one to delete */
	current_node = *head;
	for (current_index = 0; current_node != NULL && current_index < index - 1;
	     current_index++)
	{
		current_node = current_node->next;
	}

	/* If we reached the end of the list or the index is out of bounds */
	if (current_node == NULL || current_node->next == NULL)
		return (-1);

	/* Delete the node */
	node_to_delete = current_node->next;
	current_node->next = node_to_delete->next;
	free(node_to_delete);

	return (1);
}
