#include "main.h"
/**
 * cap_string - this function capitalizes every word.
 * @s: character array.
 * Return: s.
 */

char *cap_string(char *s)
{
	int a; /* for indexing*/

	for (a = 0; s[a] != '\0'; a++)
	{
	/*check if first char is lowercase*/
	if (a == 0)
	{
		if (s[a] >= 'a' && s[a] <= 'z')
			s[a] = s[a] - 32;/*to capitalize it*/
		continue; /*continue to loop */
	}
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
	s[a] == '}' ||
	(s[a] == '.' && s[a] == '\n'))
	{
		a++; /*check next character*/
	/*check if next char is lowercase and capitalize*/
	if (s[a] >= 'a' && s[a] <= 'z')
		s[a] = s[a] - 32;
	}
}
	return (s);
}
