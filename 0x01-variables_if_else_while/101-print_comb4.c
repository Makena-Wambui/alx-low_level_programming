#include <stdio.h>
/**
*main - this is the entry point of the program.
*
*Description: This function prints 3 number combos.
*
*Return: Always 0 (Success).
*/
int main(void)
{
int num_1 = 0;
int num_2;
int num_3;
while (num_1 <= 7)
{
num_2 = num_1 + 1;/*initialized num_2 here*/
while (num_2 <= 8)
{
num_3 = num_2 + 1;
while (num_3 <= 9)
{
putchar(num_1 + '0');
putchar(num_2 + '0');
putchar(num_3 + '0');

if (!(num_1 == 7 && num_2 == 8 && num_3 == 9))
{
putchar(',');
putchar(' ');
}
num_3++;
}
num_2++;
}
num_1++;
}
putchar('\n');
return (0);
}
