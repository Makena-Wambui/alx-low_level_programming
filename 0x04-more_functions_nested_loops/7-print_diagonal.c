#include "main.h"
/**
 * print_diagonal - prints a diagonal line to stdout.
 * @n:number of times '\' is to be printed.
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int m;
	int s;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
		for (m = 1; m <= n; m++)
		{
			for (s = 0; s <= m; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
