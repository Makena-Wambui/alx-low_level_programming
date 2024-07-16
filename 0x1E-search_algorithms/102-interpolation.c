#include "search_algos.h"

/**
 * interpolation_search - this function searches for a value in a sorted array
 * of integers using the Interpolation search algorithm.
 *
 * @array: array we are searching in.
 * @size: size of the array.
 * @value: target element.
 *
 * Return: -1 if not found.
 * Otherwise, index of target element.
 */

int interpolation_search(int *array, size_t size, int value)
{
	/* Find indexes of two corners */
	size_t low = 0, high = (size - 1);
	size_t pos;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			if (array[low] == value)
			{
				printf("Value checked array[%ld] = [%d]\n", low, array[low]);
				return (low);
			}

			return (-1);
		}

		pos = low + (((double)(high - low)
						/ (array[high] - array[low])) * (value - array[low]));

		if (pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return -1;
		}
		
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
		{
			return (pos);
		}
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;

	}
	if (value < array[low] || value > array[high])
		printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
