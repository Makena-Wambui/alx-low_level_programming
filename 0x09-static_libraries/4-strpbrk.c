#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - this function locates the first occurrence in
 * the string s of any of the bytes in the string accept.
 * @s: first string.
 * @accept: second string.
 * Return:s (Returns a pointer to the byte in s
 * that matches one of the bytes in accept.
 */

char *_strpbrk(char *s, char *accept)
{
	const char *holder;
	/*if both pointer parameters point to Null */
	if (s == NULL || accept == NULL)
		return (NULL);
	/**
	 * Lets now find the first char in s
	 * that matches any character in accept.
	 */
	while (*s != '\0')
	{
		holder = accept;
		while (*holder != '\0')
		{
			if (*s == *holder) /*if char in s is the same as char in accept*/
			{
				return (s);
			}
			holder++;
		}
		s++;
	}
	return (NULL);





}
