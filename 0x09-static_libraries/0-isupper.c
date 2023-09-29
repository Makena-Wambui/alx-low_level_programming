#include "main.h"
/**
 * _isupper - checks whether a character is uppercase.
 * Description: tets whether a given character is uppercase.
 * @c: is an integer parameter c.
 *
 * Return: 1 if c is upper and 0 otherwise.
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
	return (1);
}
else
{
return (0);
}
}
