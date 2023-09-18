#include "main.h"
#include <string.h>
/**
 * rev_string - this function prints a string in reverse.
 * @s: character array.
 *
 * Return: void
 */

void print_rev(char *s)
{
	int a;

	for (a = strlen(s) - 1; a >= 0; a--)
		_putchar(s[a]);
	_putchar('\n');
}
