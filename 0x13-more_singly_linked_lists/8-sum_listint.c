#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data (n)
 * of a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The sum of all the data (n) of the linked list,
 * or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current_node = head;

	/* Traverse the linked list and add the value of each node to the sum */
	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}

	return (sum);
}
