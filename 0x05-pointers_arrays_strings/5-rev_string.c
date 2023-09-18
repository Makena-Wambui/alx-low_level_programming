#include "main.h"
#include <string.h>
/**
 * rev_string - this function reverses a string.
 * @s: a string.
 * @*s: pointer to a string.
 *
 *
 * Return: void.
 */

void rev_string(char *s)
{
	int a, b;/*used as indices to traverse the string*/
	char q;
/*temporary char variable used to hold the characters while reversing string*/
	a = 0;/*index of the first char in string*/
	b = strlen(s) - 1;/*index of the last char of the string*/
	while (a < b)/*loop continues as long as a is less than b*/
	{
		q = s[a];
		s[a] = s[b];
		s[b] = q;
		a++;
		b--;
	}
}
