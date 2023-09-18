#include "main.h"
/**
 *_strcpy - this function copies a string into another.
 *@dest: destination string.
 *@*dest : pointer to dest string.
 *@src: source string.
 *@*src: pointer to src string.
 *Return: *dest pointer to dest string.
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	a = 0;
	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
		/* copied character by character from src to dest*/
	}
	dest[a] = '\0'; /*copy null char at end of dest*/
	return (dest);
}
