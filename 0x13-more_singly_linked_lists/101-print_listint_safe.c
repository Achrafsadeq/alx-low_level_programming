#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	const listint_t *check;
	size_t count = 0;
	size_t position;

	while (current)
	{
		/* Print the current node's address and value */
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		current = current->next;
		/* Reset check pointer to head for each iteration */
		check = head;
		position = 0;
		/* Check if we've encountered a loop */
		while (position < count)
		{
			if (current == check)
			{
				/* We've found a loop, print the looping node and return */
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (count);
			}
			check = check->next;
			position++;
		}
		/* If head becomes NULL, exit with status code 98 */
		if (!head)
			exit(98);
	}
	/* Return the total number of nodes if no loop is found */
	return (count);
}
