#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to the pointer to the head of the linked list.
 *
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		next = (*head)->next;  /* Save the next node */
		(*head)->next = prev;  /* Reverse the link */
		prev = *head;
		*head = next;
	}

	/* Update head to the new first node */
	*head = prev;

	return (*head);
}
