#include "lists.h"

/**
 * get_nodeint_at_index - Get the nth node of a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 * @index: Index of the node to retrieve, starting from 0.
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node = head;
	unsigned int current_index = 0;

	while (current_node != NULL)
	{
		if (current_index == index)
			return (current_node);

		current_node = current_node->next;
		current_index++;
	}

	return (NULL);
}
