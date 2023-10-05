#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - this function concatenates two strings.
 * @s1: dest string.
 * @s2: src string.
 * @n: no of bytes of s2 to be appended..
 * Return: pointerbto new string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pntr;
	unsigned int lens1, lens2 = 0;
	unsigned int a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)/*find string lengths*/
		lens1++;
	for (a = 0; s2[a] != '\0'; a++)
		lens2++;
	if (n >= lens2)/*allocate mem for s1 and n bytes of s2*/
	{
		pntr = malloc(sizeof(char)  * (lens1 + lens2 + 1));
	}
	else if (n < lens2)
		pntr = malloc(sizeof(char) * (lens1 + n + 1));
	if (pntr == NULL)
		return (NULL);
	for (a = 0; a < lens1; a++)/*copy s1 into pntr*/
		pntr[a] = s1[a];
	if (n >= lens2)
	{
		for (a = 0; a < (lens1 + lens2); a++)
		{
			pntr[lens1 + a] = s2[a];
		}
	}
	else if (n < lens2)
	{
		for (a = 0; a < (lens1 + n); a++)
		{
			pntr[lens1 + a] = s2[a];
		}
	}
	pntr[a] = '\0';/*allocate null byte*/
	return (pntr);
}
