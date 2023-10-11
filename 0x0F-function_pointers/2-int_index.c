#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - this function searches for an integer.
 * @array : array to be searched.
 * @size: size of the array.
 * @cmp: pointer to function.
 * Return:-1 if int not found or if found the index of that int.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	if (array && cmp)
	{
		for (a = 0; a < size; a++)
		{
		if (cmp(array[a]))
		{
			return (a);
		}
		}
	}
	return (-1);
}
