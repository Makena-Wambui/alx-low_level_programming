#include "function_pointers.h"
/**
 * array_iterator - this function executes a function given
 * as a parameter on each element of an array.
 * @array: int array.
 * @size: size of the array.
 * @action: pointer to a function.
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;
	a = 0;
	while (a < size)
	{
		action(array[a]);
		a++;
	}
}
