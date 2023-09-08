#include <stdio.h>
/**
 *main - this is the entry point of the program.
 *
 *Description: This function prints 0, 1, 2, ...
 *
 *Return: Always 0 (Success).
 */

int main(void)
{
int num;
num = 0;

while (num <= 9)
	{
	putchar(num + '0');
	if (num != 9)
	{
	putchar(',');
	putchar(' ');
	}
	num++;
	}
putchar('\n');
return (0);
}
