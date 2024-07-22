#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog structure
 * @d: Pointer to the dog structure to free
 *
 * Description: This function frees the memory allocated for a dog structure,
 * including the memory allocated for its name and owner.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	/* Free the memory allocated for name and owner */
	free(d->name);
	free(d->owner);

	/* Free the dog structure itself */
	free(d);
}
