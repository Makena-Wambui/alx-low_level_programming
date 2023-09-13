#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

i = 0;

/*infinite loop starts here while (i < 10)*/
{
/* putchar(i); causing infinite loop*/
} /* i not modified or updated or incremented */

printf("Infinite loop avoided! \\o/\n");

return (0);
}
