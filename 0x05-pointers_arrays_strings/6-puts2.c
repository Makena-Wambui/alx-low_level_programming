#include "main.h"
#include <string.h>
/**
 * puts2 - this fuction prints every other char of a string.
 * @str : character string.
 * @*str : pointer to a character string.
 *
 * Return: void.
 */

void puts2(char *str)
{
	int size;
	int a;

	size = strlen(str);
	a = 0;
	while (a <= size)
	{
		_putchar(str[a]);
		a += 2; /*increment index by 2*/
	}
	_putchar('\n');
}
