#include "main.h"
/**
 * print_sign- this function prints the sign of a number.
 * @n : integer parameter n.
 * Description: it checks whether a number is less than, greater than
 * or equal to zero and prints its sign.
 *
 * Return: 1 if > than 0, 0 if == to 0, -1 if < than 0.
 *
 */

int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n == 0)
{
	_putchar('0');
	return (0);
}
else
{
	_putchar('-');
	return (-1);
}
}
