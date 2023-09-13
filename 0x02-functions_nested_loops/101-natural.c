#include <stdio.h>
/**
 * main - this is the entry point of the program.
 *
 * Description: prints sum of all natural numbers under 1024.
 *
 * Return: 0 on success.
 */

int main(void)
{
int add;
int a;

add = 0;
for (a = 0; a < 1024; a++)
{
if (a % 3 == 0 || a % 5 == 0)
	add = add + a;
}
printf("%d\n", add);
return (0);
}
