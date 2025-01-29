#include "search_algos.h"

/**
 * jump_list - Performs jump search on a sorted singly linked list
 * @list: Pointer to the head of the linked list
 * @size: Number of nodes in the list
 * @value: Value to search for
 *
 * Description:
 * Implements jump search algorithm for a sorted linked list.
 *
 * Return: Pointer to the node containing value, or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step_size;
	listint_t *node, *jump;

	if (list == NULL || size == 0)
		return (NULL);

	step_size = sqrt(size);
	node = jump = list;

	while (jump->index + 1 < size && jump->n < value)
	{
		node = jump;
		for (size_t i = 0; i < step_size && jump->next; i++)
		{
			jump = jump->next;
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		node->index, jump->index);

	while (node->index <= jump->index)
	{
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
		if (node->n == value)
			return (node);
		if (node->index == jump->index)
			break;
		node = node->next;
	}

	return (NULL);
}
