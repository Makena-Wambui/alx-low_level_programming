#include <stdlib.h>
#include "main.h"
#include <limits.h>
/**
 *_calloc - this function allocates memory for an array.
 *@nmemb: no of elements.
 *@size : size of each element.
 *Return: void pointer.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pntr;
	unsigned char *pn_tr;
	unsigned int a;
	size_t tsize;

	if (nmemb == 0 || size == 0)
		return (NULL);
	/*check for overflow*/
	if (nmemb > UINT_MAX / size)
		return (NULL);
	/*calculate total size to allocate*/
	tsize = nmemb * size;

	pntr = malloc(tsize);
	if (pntr == NULL)
		return (NULL);
	/*set allocated memory to zero*/
	pn_tr = pntr;
	for (a = 0; a < tsize; a++)
		pn_tr[a] = 0;

	return (pntr);
}
