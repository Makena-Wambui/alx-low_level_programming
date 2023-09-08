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

	while (small_letter <= 'z')
	{
	if (small_letter != 'q' && small_letter != 'e')
		{
		putchar(small_letter);
		small_letter++;
		}
	}
	putchar('\n');
	return (0);
}
