#include "main.h"
/**
 * _puts - this function prints a string.
 * @str: a string
 *
 * Return: void.
 */

void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
