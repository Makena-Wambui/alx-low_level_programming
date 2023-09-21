#include "main.h"
#include <string.h>

/**
 *string_toupper - This function coverts lowercase characters
 *to uppercase.
 *@s: pointer to character array.
 *Return: char * (pointer to char).
 */

char *string_toupper(char *s)
{
	int a;/* for indexing */
	int length = strlen(s);

	/**
	 * Check if value at index a is lowercase.
	 * Subtract 32 to convert to uppercase.
	 */

	for (a = 0; a < length; a++)
	{
	if (s[a] >= 'a' && s[a] <= 'z')
	{
	s[a] = s[a] - 32;
	}
	}
	return (s);
}
