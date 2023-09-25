#include "main.h"
/**
 * _strspn - this function calculates the length (in bytes) of
 * the initial segment of s which consists entirely
 * of bytes in accept.
 * @s: sting with prefix substring.
 * @accept: this is the string that has or does not have matching bytes.
 * Return:unsigned int (Returns the number of bytes in the initial
 * segment of s which consist only of bytes from accept)
 */


unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
				break;
		}
		if (!accept[b])
			break;
	}
	return (a);

}
