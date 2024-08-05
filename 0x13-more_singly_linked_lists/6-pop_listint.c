#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *               and returns the head node's data (n)
 * @head: double pointer to the head of the list
 *
 * Return: the data of the head node, or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	/* Save the current head node */
	temp = *head;
	/* Get the data from the head node */
	data = temp->n;
	/* Move the head pointer to the next node */
	*head = (*head)->next;
	/* Free the old head node */
	free(temp);

	return (data);
}
