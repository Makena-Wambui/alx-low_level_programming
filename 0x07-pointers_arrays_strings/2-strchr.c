#include "main.h"
#include <stddef.h>
/**
 * _strchr - this function finds the first occurence of a char c in string s.
 * @s: pointer to string.
 * @c: character we are looking for.
 * Return:c(pointer to that character).
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (char *) s;
		s++;
	}

return (NULL);
}
