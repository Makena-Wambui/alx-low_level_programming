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
	int namelength = 0;
	int ownerlength = 0;
	int a;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	for (a = 0; name[a] != '\0'; a++)
		namelength++;
	ptr->name = malloc((sizeof(char) * namelength) + 1);
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (a = 0; a < namelength; a++)
		ptr->name[a] = name[a];
		ptr->name[namelength] = '\0';

	for (a = 0; owner[a] != '\0'; a++)
		ownerlength++;

	ptr->owner = malloc((sizeof(char) * ownerlength) + 1);
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	for (a = 0; a < ownerlength; a++)
		ptr->owner[a] = owner[a];
		ptr->owner[ownerlength] = '\0';

	ptr->age = age;
	return (ptr);
}
