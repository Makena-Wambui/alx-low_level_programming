#include "main.h"
#include <string.h>
/**
 *_strncat - this function appends n bytes frm src to dest.
 *@dest : destination string.
 *@src : source string.
 *@n : no of bytes of src appended to dest.
 *
 *Return:dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int destl = strlen(dest);
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
	dest[destl + a] = src[a];
	}
	dest[destl + a] = '\0';
	return (dest);


}
