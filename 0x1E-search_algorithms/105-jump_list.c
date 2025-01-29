#include "search_algos.h"

/**
 * jump_list - Implements jump search algorithm for a sorted singly linked list
 *
 * @list: Pointer to the head of the linked list
 * @size: Number of nodes in the linked list
 * @value: Target value to search for
 *
 * Return: Pointer to the first node containing 'value', or NULL if not found
 *         or if list is empty
 *
 * Description: This function implements the jump search algorithm specifically
 *              adapted for linked lists.
 *
 * Time Complexity: O(√n), where n is the number of nodes
 * Space Complexity: O(1) as only constant extra space is used
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *node, *jump;

	if (list == NULL || size == 0)
		return (NULL);

	step = 0;
	step_size = sqrt(size);

	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		node = jump;
		for (step += step_size; jump->index < step; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
		node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
