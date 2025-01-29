#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_list - Searches for a value in a sorted singly linked list
 *             using the Jump search algorithm.
 * @list: Pointer to the head of the list.
 * @size: Number of nodes in the list.
 * @value: Value to search for.
 * Return: Pointer to the first node where value is located,
 *         or NULL if the value is not found or the list is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *current, *prev;

	if (list == NULL || size == 0)
		return (NULL);

	step = sqrt(size);
	current = list;
	prev = NULL;

	while (current && current->index < size && current->n < value)
	{
		prev = current;
		step_size = 0;

		while (current->next && step_size < step)
		{
			current = current->next;
			step_size++;
		}
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

		if (current->n >= value)
			break;
	}

	if (prev)
		printf("Value found between indexes [%lu] and [%lu]\n",
				prev->index, current->index);

	current = prev;
	while (current && current->index <= prev->index + step)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}

	return (NULL);
}
