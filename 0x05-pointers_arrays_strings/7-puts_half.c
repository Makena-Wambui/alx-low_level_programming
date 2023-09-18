#include "main.h"
#include <string.h>
/**
 * puts_half - this function prints the last half of a string.
 * @str : character array.
 * *str: pointer to a string.
 *
 * Return: void.
 */

void puts_half(char *str)
{
	int a, size;

	size = strlen(str);

	if (size % 2 == 0)
	{
		a = (size / 2);
		while (a < size)
		{
			_putchar(str[a]);
			a++;
		}
	}
	else if (size % 2 != 0)
	{
	a = (size - 1) / 2;
	while (a < size)
	{
	_putchar(str[a]);
	a++;
	}
	}
	_putchar('\n');
}
