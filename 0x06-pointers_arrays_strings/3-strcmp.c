#include "main.h"
/**
 * _strcmp - this function compares two strings
 * character by character.
 * @s1: character array.
 * @s2: character array.
 * Return:0 if equal,(-)if s1 is less than s2, (+)if s1 is greater.
 */

int _strcmp(char *s1, char *s2)
{
	int a; /* iterates through both strings*/

	for (a = 0; s1[a] != '\0' || s2[a] != '\0'; a++)
	{ /*compare the ascii values in each string at index a*/
		if (s1[a] < s2[a])
			return (s1[a] - s2[a]);
		else if (s2[a] < s1[a])
			return (s1[a] - s2[a]);
	}
	return (0);
}
