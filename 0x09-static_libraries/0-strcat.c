#include "main.h"
#include <string.h>
/**
 * _strcat - this functions appends one string to another.
 * @dest : destination string.
 * @src : source string.
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int destlength = strlen(dest);/*use strlen to get length */

	for (a = 0; src[a] != '\0'; a++)
	{
	dest[destlength + a] = src[a];/* copying src to the end of dest*/
	}
	dest[destlength + a] = '\0';/*new string has a null byte*/
	return (dest);
}
