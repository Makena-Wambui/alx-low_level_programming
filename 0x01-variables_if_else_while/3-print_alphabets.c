#include <stdio.h>
/**
* main - this is the entry point of the program.
*
* Description: This function prints a to z.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char small_letter = 'a';
char capital_letter = 'A';
while (small_letter <= 'z')
{
putchar(small_letter);
small_letter++;
}
while (capital_letter <= 'Z')
{
putchar(capital_letter);
capital_letter++;
}
putchar('\n');
return (0);
}
