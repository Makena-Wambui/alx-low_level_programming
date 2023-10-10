#include <stdlib.h>
#include <stddef.h>
#include "dog.h"
/**
 * free_dog - this function frees dogs.
 * @d: pointer to struct.
 * Return: void.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
