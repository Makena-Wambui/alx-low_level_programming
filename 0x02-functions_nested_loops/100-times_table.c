#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints a times table to stdout.
 * @n: integer parameter n.
 *
 * Return: void. No return value.
 */
void print_times_table(int n)
{
int a, b, c;

if (n < 0 || n > 15)
{
return;
}

for (a = 0; a <= 15; a++)
{
	for (b = 0; b <= 15; b++)
	{
	c = a * b;
	if (b == 0)
		printf("%d", c);
	else
	{
		printf("%3d, ", c);
		_putchar('\n');
	}
	}
}
printf("\n");
}
