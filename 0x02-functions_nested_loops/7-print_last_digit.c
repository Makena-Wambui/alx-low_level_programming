#include "main.h"
/**
 *print_last_digit - this fuction prints the last digit to stdout.
 *@num: an integer parameter.
 *
 *Description: This function prints the last digit of a number.
 *
 * Return: lastdig ie num modulo 10.`
 */


int print_last_digit(int num)
{
	int lastdig = num % 10;

	_putchar('0' + lastdig);
	return (lastdig);
}
