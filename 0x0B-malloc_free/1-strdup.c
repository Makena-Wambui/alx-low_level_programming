#include "main.h"
#include <stdlib.h>
/**
 * _strdup - this function - this function returns a pointer to a newly
 * allocated space in memory, which contains a copy
 * of the string given as a parameter.
 * @str:string to be copied.
 * Return: copy of str.
 */
char *_strdup(char *str)
{
	char *strdup;/*the duplicate string*/
	unsigned int strlength;
	unsigned int a;
	/*a iterates through the length of str*/
	unsigned int b;
	/*use b to copy str into strdup*/
	char *holder = str;

	if (str == NULL)
		return (NULL);

	/*lets find the length of str*/
	strlength = 0;
	for (a = 0; str[a] != '\0'; a++)
		strlength++;
	str = holder;

	strdup = malloc((strlength * sizeof(char)) + 1);
	if (strdup == NULL)
		return (NULL);
	/*rem to allocate memory for null byte with +1.*/
	for (b = 0; b < strlength; b++)
		strdup[b] = str[b];
	strdup[b] = '\0';

	return (strdup);
}
