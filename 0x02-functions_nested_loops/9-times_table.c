#include "main.h"
#include <stdio.h>
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

for (r = 0; r <= 9; r++)
{
	for (c = 0; c <= 9; c++)
	{
	mult = c * r;
	if (c == 0)
	{
	printf("%d, ", mult);
	}
	else
	{
	printf("%2d", mult);
	if (c != 9)
	printf(", ");
	}
	}
	printf("\n");
}
}
