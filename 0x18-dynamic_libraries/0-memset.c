#include "main.h"
/**
 * _memset - this function fills n bytes of the memory area pointed to
 * by s with a char b.
 * @s : pointer to s.
 * @b : character b.
 * @n: no of bytes in s to be filled with b.
 * Return: pointer to s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;

	}
return (s);
}
