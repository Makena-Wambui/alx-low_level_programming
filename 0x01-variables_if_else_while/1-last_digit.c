#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - this is the entry point of the program.
 *
 *Description: This function shows how if and else if work.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int n;
int last_num;
last_num = n % 10;/*use modulo to extract last digit of n */
srand(time(0));
n = rand() - RAND_MAX / 2;

if (last_num > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, last_num);
	}
else if (last_num == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, last_num);
	}
else if (last_num < 6 && last_num != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_num);
	}
return (0);
}
