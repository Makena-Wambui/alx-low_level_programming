#include "main.h"
/**
 * _memcpy - this function copies n bytes of src int dest.
 * @dest: pointer to destination area.
 * @src: pointer to source area.
 * @n: no of bytes of src to be copied into dest.
 * Return:dest(pointer to dest area).
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
	dest[a] = src[a];
	}
	return (dest);

}
