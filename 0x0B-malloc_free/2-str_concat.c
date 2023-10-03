#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - this function concatenates two strings.
 * @s1: destination string.
 * @s2: source string.
 * Return:pointer to new string.
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;

	/*lets find length of s1 and s2*/
	int s1len = strlen(s1);
	int s2len = strlen(s2);

	/*length of new string in heap s3*/
	int s3len = s1len + s2len;
	int a, q;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*now lets use malloc to allocate mem in heap*/
	s3 = malloc(sizeof(char) * s3len + 1);
	if (s3 == NULL)
		return (NULL);
	/*+1 allocates mem for null byte*/

	/*lets copy s1 into s3*/
	for (a = 0; a < s1len; a++)
		s3[a] = s1[a];
	/*now append s2 into s3*/
	for (q = 0; q < s2len; q++)
		s3[s1len + q] = s2[q];
	/*s3 should be null terminated*/
	s3[s3len] = '\0';

	return (s3);
}
