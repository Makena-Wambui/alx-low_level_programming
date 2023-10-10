#include "dog.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_dog - this function prints a struct dog.
 * @d: pointer to struct.
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d->age == 0)
		printf("Age: (nil)\n");
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
