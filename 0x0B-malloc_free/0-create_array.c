#include "main.h"
#include <stdlib.h>
/**
 * create_array - this function creates an array of chars
 * and initializes it with a specific char.
 * @size: parameter 1.
 * @c: parameter 2.
 * Return: a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *makena;
	unsigned int f;

	if (size == 0)
	{
		return (NULL);
	}

	makena = malloc(sizeof(char) * size);
	/*malloc returns a pointer to allocated mem*/

	if (makena == NULL)
		return (NULL);
	/*check if return value is null before using*/
	f = 0;
	while (f < size)
	{
		makena[f] = c;/*initiliazing that array to c*/
		f++;
	}
	return (makena);
}
