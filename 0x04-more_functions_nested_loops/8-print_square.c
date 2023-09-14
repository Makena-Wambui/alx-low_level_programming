#include "main.h"
/**
 * print_square - prints a square to std out.
 *@size: size of square.
 *
 * Return: void.
 */

void print_square(int size)
{
	int s;
	int t;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (s = 1; s <= size; s++)
		{
			for (t = 1; t <= size; t++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
