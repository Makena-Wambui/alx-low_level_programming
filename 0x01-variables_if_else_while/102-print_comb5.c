#include <stdio.h>
/**
 * main - This is the entry point of the program.
 *
 * Description: This function prints two digit two num combos.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num_1 = 0;
int num_2 = num_1 + 1;

num_1 = 0;
while (num_1 <= 99)
{
while (num_2 <= 99)
	{
	putchar(num_1 / 10 + '0');/*to extract tens digit of num_1 */
	putchar(num_1 % 10 + '0');/*to extract ones digit of num_1 */
	putchar(' ');
	putchar(num_2 / 10 + '0');
	putchar(num_2 % 10 + '0');

	if (num_1 != 98 ||  num_2 != 99)
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
