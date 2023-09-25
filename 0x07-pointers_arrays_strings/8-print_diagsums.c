#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - this function calculates and prints the sum
 * of the two diagonals of a square matrix of integers.
 * @a: pointer to an int array.
 * @size: size of the square matrix.
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	/* diagonal_1 and 2 accumulate the sum of the 2 diagonals */
	int m;
	int diagonal_1 = 0;
	int diagonal_2 = 0;

	/**
	 * This loop iterates over the elements of the first
	 * diagonal (from top-left to bottom-right) of the square matrix.
	 * Accesses diag elements using a[m * size + m].
	 * m is used to index rows and columns of the matrix.
	 */
	for (m = 0; m < size; m++)
	{
		diagonal_1 = diagonal_1 + a[m * size + m];
	}

	for (m = size - 1; m >= 0; m--)
	{
		diagonal_2 += a[m * size + (size - m - 1)];
	}
	printf("%d, %d\n", diagonal_1, diagonal_2);
}

