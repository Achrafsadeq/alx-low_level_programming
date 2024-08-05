#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely (can free lists with a loop)
 * @h: Pointer to the pointer of the start of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
    size_t len = 0;
    int diff;
    listint_t *temp;

    if (!h || !*h)
        return (0);

    while (*h)
    {
        diff = *h - (*h)->next;
        if (diff > 0)
        {
            temp = (*h)->next;
            free(*h);
            *h = temp;
            len++;
        }
        else
        {
            free(*h);
            *h = NULL;
            len++;
            break;
        }
    }

    *h = NULL;

    return (len);
}
