#include <stdio.h>
/**
 * main - prints fibonacci numbers from 1 to 50.
 *
 * Return: 0 on success.
 *
 */

int main(void)
{
unsigned long int num1 = 1;
unsigned long int num2 = 2;
int sum;
int m;

printf("%lu, ", num1);

for (m = 1; m < 50; m++)
{
	printf("%lu", num2);
	sum = num1 + num2;
	num1 = num2;
	num2 = sum;
	if (m != 49)
		printf(", ");
}
printf("\n");
return (0);
}
