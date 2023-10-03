#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid- this function returns a pointer to a
 * 2 dimensional array of integers.
 * @width: dimension 1.
 * @height: dimension 2.
 * Return: double pointer to the 2D array.
 */
int **alloc_grid(int width, int height)
{
	int **my2dgrid;
	int a, q, r;

	if (width <= 0 || height <= 0)
		return (NULL);

	my2dgrid = malloc(sizeof(int *) * width);
	if (my2dgrid == NULL)
		return (NULL);
	for (a = 0; a < width; a++)
	{
		my2dgrid[a] = (int *)malloc(sizeof(int) * height);
	}
	for (q = 0; q < width; q++)
	{
		for (r = 0; r < height; r++)
		{
		my2dgrid[q][r] = 0;
		}
	}
	return (my2dgrid);
}
