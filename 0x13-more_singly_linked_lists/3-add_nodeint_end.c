#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: double pointer to the head of the list
 * @n: integer value to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_tail;
	listint_t *temp;

	/* Allocate memory for the new node */
	new_tail = malloc(sizeof(listint_t));
	if (new_tail == NULL)
		return (NULL);

	new_tail->n = n;
	new_tail->next = NULL;

	if (*head == NULL)
	{
		/* If the list is empty, set the head to the new node */
		*head = new_tail;
	}
	else
	{
		/* Use a temporary pointer to traverse the list */
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_tail;
	}

	/* Return the address of the new node */
	return (new_tail);
}
