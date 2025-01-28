#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for value in sorted singly linked list
 *             using Jump search
 * @list: Pointer to head of list
 * @size: Number of nodes in list
 * @value: Value to search for
 * Return: Pointer to first node where value is located, or NULL if not found
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
	while (current->index < size && current->n < value)
	{
		prev = current;
		step_size = 0;
		while (current->next && step_size < step)
		{
			current = current->next;
			step_size++;
		}
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
		prev ? prev->index : 0, current->index);
	current = prev ? prev : list;
	while (current && current->index <= size &&
		(prev == NULL || current->index <= prev->index + step))
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}
	return (NULL);
}
