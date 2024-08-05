#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	/* Initialize node counter */
	size_t node_count = 0;

	while (h)
	{
		/* Print the value of the current node */
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}

	/* Return the total number of nodes */
	return (node_count);
}
