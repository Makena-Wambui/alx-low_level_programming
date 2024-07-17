#include "search_algos.h"
/**
 * binary_with_recursion - This function uses recursive Binary Search to search
 * for a value in a sorted array.
 *
 * @array: pointer to the first element of the array.
 * @low: starting index of search space.
 * @high: ending index of search space.
 * @value: target element.
 *
 * Return: -1 or leftmost index of value
 *
 */

int binary_with_recursion(int *array, size_t low, size_t high, int value)
{
	size_t mid, a;

	if (low <= high)
	{
		printf("Searching in array: ");
		for (a = low; a <= high; a++)
		{
			printf("%d", array[a]);

			if (a < high)
			{
				printf(", ");
			}
		}
		printf("\n");

		mid = low + (high - low) / 2;

		if (array[mid] == value && (mid == low || array[mid - 1] != value))
		{
			return (mid);
		}

		if (array[mid] >= value)
		{
			return (binary_with_recursion(array, low, mid, value));
		}

		return (binary_with_recursion(array, mid + 1, high, value));
	}

	return (-1);

}

/**
 * advanced_binary - This function calls the binary_with_recursion function
 * in order to perform a binary search on a sorted array recursively.
 *
 * @array: pointer to the first element of the array
 * @size: size of the array.
 * @value: target element.
 *
 * Return: -1 or leftmost index of value.
 *
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_with_recursion(array, 0, size - 1, value));
}
