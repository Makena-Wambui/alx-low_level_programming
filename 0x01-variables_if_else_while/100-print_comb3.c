#include <stdio.h>
/**
 *main - this is the entry point of the program.
 *
 *Description: This function prints 2 number combos.
 *
 *Return: Always 0 (Success).
 */
int main(void)
{
int num_1 = 0;
int num_2 = 1;

while (num_1 <= 8)
{
	while (num_2 <= 9)
	{
	putchar(num_1 + '0');
	putchar(num_2 + '0');
	if (!(num_1 == 8 && num_2 == 9))
	{
	putchar(',');
	putchar(' ');
	}
	num_2++;
	}
num_1++;
num_2 = num_1 + 1;
}
putchar('\n');
return (0);
}
