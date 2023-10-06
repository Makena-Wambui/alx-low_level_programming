#include "main.h"
#include <stdlib.h>
/**
 * array_range - this function creates an array of integers.
 * @min:parameter 1.
 * @max:parameter 2.
 * Return: pointer to array.
 */
int *array_range(int min, int max)
{
	int *rud;
	int tsize, a;

	if (min > max)
		return (NULL);

	/*size of the array*/
	tsize = (max - min + 1);

	rud = malloc(sizeof(int) * tsize);
	if (rud == NULL)
		return (NULL);

	/*initialize array with values fro min to max*/
	for (a = 0; a < tsize; a++)
		rud[a] = min + a;
	return (rud);
}
