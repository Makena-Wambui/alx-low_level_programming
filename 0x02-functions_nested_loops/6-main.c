#include "main.h"
#include <stdio.h>
/**
 *main - this function prints to std output.
 *
 *Description: this function prints the absolute value of a number.
 *
 *Return: Always 0 on success.
 *
 */
int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}
