#include "main.h"
#include <stdlib.h>

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
