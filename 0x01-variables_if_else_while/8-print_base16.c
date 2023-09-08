#include <stdio.h>
/**
 *main - this is the entry point of the program.
 *
 *Description: This function prints 0 to 9.
 *
 *Return: Always 0 (Success).
 */

int main(void)
{
char num;
char alphabet;

num = '0';
alphabet = 'a';

while (num <= '9')
	{
	putchar(num);
	num++;
	}
while (alphabet <= 'f')
	{
	putchar(alphabet);
	alphabet++;
	}
putchar('\n');
return (0);
}
