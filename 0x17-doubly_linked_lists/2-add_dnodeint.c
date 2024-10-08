#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: A double pointer to the head of the doubly linked list.
 * @n: The integer to store in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Set the data for the new node */
	new_node->n = n;

	/* Make the new node's next point to the current head */
	new_node->next = *head;
	new_node->prev = NULL;

	/* If the list is not empty, update the previous head */
	if (*head != NULL)
		(*head)->prev = new_node;

	/* Update head to point to the new node */
	*head = new_node;

	return (new_node);
}
