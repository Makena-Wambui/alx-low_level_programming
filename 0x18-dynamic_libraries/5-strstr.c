#include "main.h"
#include <stddef.h>
/**
 *_strstr - this  function finds the first occurrence of
 *the substring needle in the string haystack.
 *@haystack: is the string we are searching.
 *@needle: the substring we are trying to match with haystack.
 *Return: a pointer to the beginning of the located substring.
 */

char *_strstr(char *haystack, char *needle)
{
for (; *haystack != 0; haystack++)
{
	char *a = haystack;
	char *b = needle;

	while (*a == *b && *b != 0)
	{
		a++;
		b++;
	}
	if (*b == '\0')
		return (haystack);
}
/*if no match return null*/
return (NULL);
}
