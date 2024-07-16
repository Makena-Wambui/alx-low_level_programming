#include "search_algos.h"

/**
 * min - This function returns the lesser integer.
 * It returns the minimum of two integers
 * It is used to handle cases where the
 * block size exceeds the array size.
 *
 * @a: integer a
 * @b: integer b
 *
 * Return: a or b.
 */

size_t min(size_t a, size_t b)
{
	return ((a < b) ? a : b);
}

/**
 * jump_search - finds an element in a sorted array
 * using the jump sort algorithm.
 *
 * @array: a pointer to the first element of the array to search in.
 * @size: size of the array.
 * @value: target element.
 *
 * Return: -1 or the index of the target element.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i;
	size_t block_size = sqrt(size);
	size_t prev_index = 0;

	if (array == NULL)
		return (-1);

	while (array[min(block_size, size) - 1] < value)
	{
		printf("Value checked array[%ld] = [%d]\n",
			min(block_size, size) - 1, array[min(block_size, size) - 1]);
		prev_index = block_size;
		block_size += sqrt(size);

		if (prev_index >= size)
		{
			return (-1);
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		prev_index, min(block_size, size) - 1);
	for (i = prev_index; i < min(block_size, size); i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
