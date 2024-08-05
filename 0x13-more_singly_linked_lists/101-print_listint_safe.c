#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t nodes = 0;

	if (head == NULL)
		exit(98);

	slow = head;
	fast = head;

	while (slow != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		nodes++;

		slow = slow->next;
		if (fast != NULL && fast->next != NULL)
		{
			fast = fast->next->next;
			if (slow == fast)
			{
				printf("-> [%p] %d\n", (void *)slow, slow->n);
				break;
			}
		}
	}

	return (nodes);
}
