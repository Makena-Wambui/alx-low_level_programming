#include "search_algos.h"
/**
 * linear_search - This function uses the linear search algorithm to search for
 * a particular value in an array of integers.
 *
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the target element.
 *
 * If value is not present in array or if array is NULL,
 * your function must return -1.
 *
 * Every time you compare a value in the array to the value you are searching,
 * you have to print this value.
 *
 * Return:  -1 or the first index where value is located.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t a;

	if (array == NULL)
	{
		return (-1);
	}

	for (a = 0; a < size; a++)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		if (array[a] == value)
		{
			return (a);
		}
	}

	return (-1);

}
