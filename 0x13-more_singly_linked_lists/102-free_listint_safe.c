#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint_safe - Frees a listint_t list safely
 *                      (can free lists with a loop)
 * @h: Pointer to the pointer of the start of the list
 *
 * Description: This function can free lists with a loop
 *              the list should go though the list only once
 *              The function sets the head to NULL
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t **current;
	unsigned int temp = 0;
	unsigned int diff = 0;

	current = malloc(sizeof(listint_t *) * 1024);
	if (!current)
		exit(98);
	while (*h != NULL)
	{
		/* Check if the current node has already been encountered */
		for (temp = 0; temp < count; temp++)
		{
			if (*h == current[temp])
			{
				diff = 1;
				break;
			}
		}
		if (diff == 1)
			break;
		/* Store the pointer to the current node */
		current[count] = *h;
		*h = (*h)->next;
		count++;
	}
	/* Free all the nodes in the list */
	for (temp = 0; temp < count; temp++)
	{
		free(current[temp]);
	}
	free(current);
	/* Set the head to NULL */
	*h = NULL;
	return (count);
}
