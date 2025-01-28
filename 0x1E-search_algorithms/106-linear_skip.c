#include "search_algos.h"
#include <stdio.h>

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 * @list: Pointer to the head of the skip list to search in
 * @value: The value to search for
 * Return: Pointer to the first node where value is located,
 *         or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *prev;

	if (list == NULL)
		return (NULL);

	current = list;

	/* Traverse the express lane */
	while (current->express)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				current->express->index, current->express->n);

		/* If the value might be in this block */
		if (current->express->n >= value)
			break;

		current = current->express;
	}

	/* Define the range where the value might exist */
	prev = current;
	while (current->express)
		current = current->express;

	printf("Value found between indexes [%lu] and [%lu]\n",
	       prev->index, current->index);

	/* Perform linear search in the identified range */
	while (prev)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);

		if (prev->n == value)
			return (prev);

		prev = prev->next;
	}

	return (NULL);
}
