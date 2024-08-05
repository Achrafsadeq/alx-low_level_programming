#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to the pointer to the head of the linked list.
 * @idx: The index of the list where the new node should be added.
 * @n: The data (n) for the new node.
 *
 * Return: Address of new node, or NULL if failed or can't add node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node;
	unsigned int current_index;

	if (head == NULL)
		return (NULL);
	/* Create the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	/* Handle inserting at the beginning (index 0) */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current_node = *head;
	for (current_index = 0;
	     current_node && current_index < idx - 1;
	     current_index++)
		current_node = current_node->next;
	/* Check if we reached the desired position */
	if (current_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/* Insert the new node */
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
