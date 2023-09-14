#include "main.h"
/**
 * print_triangle - prints triangle of hashes.
 * @size: size of triangle
 *
 * Return: void.
 */

void print_triangle(int size)
{
int r;
int s;
int pound;

if (size <= 0)
{
	_putchar('\n');
}
else
{
for (r = 1; r <= size; r++)
{
	for (s = size - r; s >= 1; s--)
	{
		_putchar(' ');
	}
	for (pound = 1; pound <= r; pound++)
	{
		_putchar('#');
	}
	_putchar('\n');
}
}
}

