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
	char alpha_bet = 'a';

	while (alpha_bet <= 'z')
	{
	putchar(alpha_bet);
	alpha_bet++;
	}
	putchar('\n');
	return (0);
}
