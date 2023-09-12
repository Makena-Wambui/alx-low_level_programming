#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - this function prints to std output.
 *
 * @n: integer parameter.
 * Description: This function prints n to 98.
 *
 * Return: void. Has no return value.
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
	for (; n < 98; n++)
	{
	printf("%d, ", n);
	}
	}
	else
	{
	for (; n > 98; n--)
	{
	printf("%d, ", n);
	}
	}
	printf("98\n");
}
