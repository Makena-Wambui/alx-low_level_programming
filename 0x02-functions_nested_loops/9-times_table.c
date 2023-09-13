#include "main.h"
/**
 * times_table - this function prints to std out.
 *
 * Description: This function prints the 9 times table.
 *
 * Return: void. No return value.
 */

void times_table(void)
{
int r;
int c;
int mult;

for (r = 0; r < 10; r++)
{
	for (c = 0; c < 10; c++)
	{
	mult = c * r;
	if (mult < 10)
	{
	_putchar(' ');
	_putchar(' ');
	_putchar(mult + '0')
	}
	else
	{
	_putchar('$');
	}
	}
	_putchar('\n');
}
}
