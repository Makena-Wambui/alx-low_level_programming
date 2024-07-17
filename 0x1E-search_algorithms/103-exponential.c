#include "search_algos.h"

/**
 * binarySearch - This function searches for a value in an array using
 * Binary Search Algorithm.
 *
 * @array: pointer to the first element in the array.
 * @low: starting index of search space.
 * @high: last index of search space.
 * @value: target element.
 *
 * Return: -1 or first index of value in the array.
 *
 */

int binarySearch(int *array, size_t low, size_t high, int value)
{
	size_t mid, a;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (a = low; a < high; a++)
		{
			printf("%d, ", array[a]);
		}
		printf("%d\n", array[high]);

		mid = low + (high - low) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
			high = mid - 1;
	}

	return (-1);
}

/**
 * exponential_search - This function searches for a value in a
 * sorted array of integers using the Exponential search algorithm.
 *
 * @array: a pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: target element.
 *
 *
 * If value is not present in array or if array is NULL, return -1.
 * You have to use powers of 2 as exponential ranges to search in your array.
 *
 *
 * Return: -1 or first index of target element.
 *
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t a = 1;
	size_t high;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	while (a < size && array[a] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
				a = a * 2;
	}
	if (a < size)
		high = a;
	else
		high = size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", (a / 2), high);

	return (binarySearch(array, (a / 2), high, value));
}
