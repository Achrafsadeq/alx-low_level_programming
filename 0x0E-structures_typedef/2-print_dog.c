#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the details of a dog struct
 * @d: pointer to the dog struct to be printed
 */
void print_dog(struct dog *d)
{
	/*check if d is NULL */
	if (!d)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
