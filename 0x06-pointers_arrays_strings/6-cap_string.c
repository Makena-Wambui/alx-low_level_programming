#include "main.h"
/**
 * cap_string - this function capitalizes every word.
 * @s: character array.
 * Return: s.
 */

char *cap_string(char *s)
{
	int a; /* for indexing*/
	int caps = 1; /*set a flag to capitalize next character*/

	for (a = 0; s[a] != '\0'; a++)
	{
	/* check for these characters*/
	if (s[a] == ' ' ||
	s[a] == '\t' ||
	s[a] == '\n' ||
	s[a] == ',' ||
	s[a] == ';' ||
	s[a] == '.' ||
	s[a] == '!' ||
	s[a] == '?' ||
	s[a] == '"' ||
	s[a] == '(' ||
	s[a] == ')' ||
	s[a] == '{' ||
	s[a] == '}')
	{
	caps = 1;
	}
	else if (caps)
	{
	if (s[a] >= 'a' && s[a] <= 'z')
		s[a] = s[a] - 32;
	caps = 0; /* Reset the flag */
	}
}
	return (s);
}
