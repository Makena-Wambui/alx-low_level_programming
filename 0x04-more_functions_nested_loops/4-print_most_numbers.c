#include "main.h"
/**
 * print_most_numbers - prints 0 to 9 except 2 and 4.
 *
 * Return: void.
 */

void print_most_numbers(void)
{
	int q;

	for (q = 0; q <= 9; q++)
	{
	if (q != 2 && q != 4)
		_putchar(q + '0');
	}
	_putchar('\n');
}
