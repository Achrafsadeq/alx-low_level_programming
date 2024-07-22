#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - sets up a dog structure with provided details
 * @d: pointer to the dog structure to initialize
 * @name: the name to assign to the dog
 * @age: the age to assign to the dog
 * @owner: the owner to assign to the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

/* Check if the pointer to struct dog is not NULL */
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
