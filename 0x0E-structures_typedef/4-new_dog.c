#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * new_dog - this function creates a new dog.
 * @name: param 1.
 * @age:param 2.
 * @owner: param 3.
 * Return: pointer to the allocated memory.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return (ptr);
}
