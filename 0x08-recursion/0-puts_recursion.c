#include "main.h"
/**
 * _puts_recursion - this function prints a string to stdout.
 * @s: pointer to char.
 * Return:void.
 */

void _puts_recursion(char *s)
{
	int a = 0;
	/*Set terminating condition*/
	if (s[a] == '\0')
	{
		_putchar('\n');
		return;
	}
	/*Call _putchar to print character at index a*/
	_putchar(s[a]);
	s++;
	/*recursive call to _puts_recursion*/
	_puts_recursion(s);
}
