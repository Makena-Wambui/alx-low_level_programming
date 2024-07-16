#include "search_algos.h"

/**
 * print_array - This function prints the current subarray.
 *
 * @array: pointer to the first element in the array.
 * @low: the starting point of the array.
 * @high: the end point of the array.
 *
 * Return: void
 */

void print_array(int *array, int low, int high)
{
	int a;

	printf("Searching in array: ");
	for (a = low; a <= high; a++)
	{
		if (a != low)
		{
			printf(", ");
		}
		printf("%d", array[a]);
	}

	printf("\n");
}

/**
 * binary_search - this function searches for a value in a sorted array
 * of integers using the Binary search algorithm.
 *
 * @array: a pointer to the first element in the array.
 * @size: the number of elements in array.
 * @value: target element.
 *
 * Function must return the index where value is located.
 *
 * If value is not present in array or if array is NULL,
 * your function must return -1.
 *
 * Return: -1 or index of target element.
 */

int binary_search(int *array, size_t size, int value)
{

	int low, high, mid;

	low = 0;
	high = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	while (low <= high)
	{
		/**
		 * inside this loop,
		 * we call the print_array helper function to print
		 * the subarray each time the loop iterates.
		 */

		print_array(array, low, high);
		mid = (low + high) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}

		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
