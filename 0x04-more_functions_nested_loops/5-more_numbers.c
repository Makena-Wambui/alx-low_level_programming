#include "main.h"
/**
 * more_numbers - prints 0 to 14 ten times.
 *
 * Return: void.
 */

void more_numbers(void)
{
int q;
int t;

for (q = 1; q <= 10; q++)
{
	for (t = 0; t <= 14; t++)
	{
		if (t > 9)
		_putchar(t / 10 + '0');
		_putchar(t % 10 + '0');
	}
	_putchar('\n');
}
}
