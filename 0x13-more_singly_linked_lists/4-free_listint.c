#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;      /* Save the current node */
		head = head->next; /* Move to the next node */
		free(temp);       /* Free the current node */
	}
}
