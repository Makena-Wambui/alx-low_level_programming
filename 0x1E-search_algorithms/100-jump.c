#include "search_algos.h"

/**
 * min - This function returns the minimum of two integers.
 *
 * @a: integer a
 * @b: integer b.
 *
 * Return: a or b.
 */

size_t min(size_t a, size_t b)
{
	if (b > a)
		return (a);
	else
		return (b);
}

/**
 * jump_search - this function finds an element in a sorted
 * array using the jump search algorithm.
 *
 * @array:  a pointer to the first element of the array to search in.
 * @size: the number of elements in array
 * @value: is the value to search for
 *
 * Your function must return the first index where value is located.
 * Return: -1 or index where tartget element is located.
 *
 */
int jump_search(int *array, size_t size, int value)
{
	/* Finding block size to be jumped */
	size_t step = sqrt(size);

	/* Finding the block where element is */
	/* present (if it is present) */
	size_t prev = 0;

	while (array[min(step, size) - 1] < value)
	{
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			return (-1);
	}

	while (array[prev] < value)
	{
		prev++;

		if (prev == min(step, size))
			return (-1);
	}
	if (array[prev] == value)
		return (prev);

	return (-1);
}
