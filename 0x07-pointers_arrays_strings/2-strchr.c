#include "main.h"
#include <stddef.h>
/**
 * _strchr - this function finds the first occurence of a char c in string s.
 * @s: pointer to string.
 * @c: character we are looking for.
 * Return:s(pointer to the first occurence of c in s).
 */

char *_strchr(char *s, char c)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		if (s[a] == c)
			return (s + a);
		a++;
	}

return (NULL);
}
