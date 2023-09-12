#include "main.h"
/**
 * print_alphabet - This function prints to std output.
 *
 * Description: This function prints 'a' to 'z'.
 *
 * Return: void(does not have any return value).
 */

void print_alphabet(void)
{
	for (char ch = 'a'; ch <= 'z'; ch++)
	_putchar(ch);
	_putchar('\n');
}
