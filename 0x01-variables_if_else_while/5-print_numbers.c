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
int num;
num = 0;
while (num <= 9)
{
printf("%d", num);
num++;
}
printf("\n");
return (0);
}
