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
	putchar(',');
	putchar(' ');
	num++;
	}
return (0);
}
