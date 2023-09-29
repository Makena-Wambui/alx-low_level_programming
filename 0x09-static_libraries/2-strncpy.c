#include "main.h"
/**
 * _strncpy - this function copies n chars
 * from src to dest.
 * @dest: destination string.
 * @src: source string.
 * @n: number of n chars to be copied from src into dest.
 * Return:dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c; /*use c as an index */

	c = 0;
	/* copy n chars from src or until null byte is encountered.*/
	while (c < n && src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}

	/**
	 * initialization is empty.
	 * we start with the value of c after n chars from src have been copied.
	 * aim is to fill the rest of dest with null bytes.
	 */
	for (; c < n; c++)
	{
		dest[c] = '\0';
	}
	return (dest);
}

