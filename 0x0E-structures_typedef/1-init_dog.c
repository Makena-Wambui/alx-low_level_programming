#include "dog.h"
#include <stddef.h>
/**
 * init_dog - this function initializes a variable of type struct dog.
 * @d: pointer to struct.
 * @name: param 2.
 * @age: param 3.
 * @owner: param 4.
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)/*do not dereference a null pointer*/
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
