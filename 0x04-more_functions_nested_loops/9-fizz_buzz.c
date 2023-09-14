#include <stdio.h>
/**
 * main - this is the entry point of the program.
 * It prints FizzBuzz,Buzz, Fizz and a.
 *
 * Return: 0 on success.
 */

int main(void)
{
int a;

for (a = 1; a <= 100; a++)
{
if ((a % 3 == 0) && (a % 5 == 0))
{
printf("FizzBuzz ");
}
else if (a % 3 == 0)
{
printf("Fizz ");
}
else if (a % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", a);
}
}
printf("\n");
return (0);
}
