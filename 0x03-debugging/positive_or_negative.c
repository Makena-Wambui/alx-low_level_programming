#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*positive_or_negative - this function prints to stdout.
*@i: an integer parameter.
*Description:it checks whether a number is positive or negative.
*
*Return: void. It does not have a return value.
*/
void positive_or_negative(int i)
{
srand(time(0));
i = rand() - RAND_MAX / 2;
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
else
{
printf("%d is negative\n", i);
}
}
