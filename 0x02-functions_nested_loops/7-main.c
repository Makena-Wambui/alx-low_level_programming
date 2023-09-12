#include "main.h"
/**
 *main - this is the entry point of the program.
 *
 *Description: this function prints the last digit of a number
 *to std out.
 *
 *Return: Always 0 on success.
 */
int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
