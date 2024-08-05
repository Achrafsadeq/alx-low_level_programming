#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list safely (handles loops).
 * @h: Double pointer to the head of the list.
 *
 * Description: Frees a listint_t list and sets the head to NULL. This function
 *             also handles potential loops within the list by storing pointers
 *             to each node and checking for repeats.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t **array;
	unsigned int i = 0;
	unsigned int flag = 0;

	array = malloc(sizeof(listint_t *) * 1024);
	if (!array)
		exit(98);

	while (*h != NULL)
	{
		/* Check if the current node has already been encountered */
		for (i = 0; i < count; i++)
		{
			if (*h == array[i])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			break;

		/* Store the pointer to the current node */
		array[count] = *h;
		*h = (*h)->next;
		count++;
	}

	/* Free all the nodes in the list */
	for (i = 0; i < count; i++)
	{
		free(array[i]);
	}
	free(array);

	/* Set the head to NULL */
	*h = NULL;
	return (count);
}
