#include <stdio.h>
/**
 *main - This is the entry point of this program.
 *
 * Description: This functin prints the alphabet in reverse.
 *
 * Return: Always 0(on success).
 */
int main(void)
{
char alpha_lower = 'z';

while (alpha_lower >= 'a')
	{
	putchar(alpha_lower);
	alpha_lower--;
	}
putchar('\n');
return (0);
}
