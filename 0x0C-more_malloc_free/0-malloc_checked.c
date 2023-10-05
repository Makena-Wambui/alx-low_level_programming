#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - this function  allocates memory using malloc.
 * @b: function parameter.
 * Return: void pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	/*declare a void pointer, pntr*/
	void *pntr;

	pntr = malloc(b);

	/*check if malloc was successful*/
	if (pntr == NULL)
		exit(98);

	return (pntr);
}
