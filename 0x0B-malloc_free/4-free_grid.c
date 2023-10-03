#include "main.h"
#include <stdlib.h>
/**
 * free_grid - this function frees a 2D grid.
 * @grid: a double pointer to the allocated mem by malloc.
 * @height:height of my 2D array.
 * Return: void
 */
void free_grid(int **grid, int height)
{
	/*follow the pointer*/
	int q;
	/*free the columns first before freeing the pointer*/
	for (q = 0; q < height; q++)
	{
		free(grid[q]);
	}
	free(grid);
}
