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
	int a, d, q;

	if (width <= 0 || height <= 0)
		return (NULL);

	my2dgrid = malloc(sizeof(int *) * height);
	if (my2dgrid == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		my2dgrid[a] = malloc(sizeof(int) * width);
		if (my2dgrid[a] == NULL)
		{
			for (d = 0; d < a; d++)
			{
				free(my2dgrid[d]);
			}
			free(my2dgrid);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (q = 0; q < width; q++)
		{
		my2dgrid[a][q] = 0;
		}
	}
	return (my2dgrid);
}
