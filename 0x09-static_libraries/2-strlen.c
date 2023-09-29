#include "main.h"
/**
 * _strlen - this function returns the length of a a string.
 * @s : character array.
 *
 * Return: the length of the string.
 */

int _strlen(char *s)
{
	int a, length = 0;

	for (a = 0; s[a] != '\0'; a++)
		length++;
	return (length);
}
