#include "main.h"
#include <stdio.h>
/**
 * print_array - this function prints elements of an array.
 * @*a : pointer to an integer array.
 * @a: integer array a.
 * @n : number of array elements.
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);

		if (b < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
