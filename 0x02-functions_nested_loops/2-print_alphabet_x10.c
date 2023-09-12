#include "main.h"
/**
* print_alphabet_x10 - This function prints to std output.
*
* Description: This function prints 'a' to 'z' 10 times.
*
* Return: void(does not have any return value).
*/

void print_alphabet_x10(void)
{
int i;
char ch;

for (i = 0; i <= 9; i++)
{
	for (ch = 'a'; ch <= 'z'; ch++)
	{
	_putchar(ch);
	}
	_putchar('\n');
}
}
