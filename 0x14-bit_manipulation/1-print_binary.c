#include "main.h"
/**
 * print_binary - this function prints the binary representation of a number.
 * @n : parameter.
 * Return:nothing.
 */

void print_binary(unsigned long int n)
{
	unsigned long int val = 1UL << 63;
	/*Use 63 instead of 31 for an unsigned long int*/
	int leading_zeros = 1; /*Flag to track leading zeros*/

	/*Print the binary representation*/
	while (val != 0)
	{
		if ((n & val) != 0)
		{
			leading_zeros = 0; /* Disable the flag when the first '1' is encountered*/
			_putchar('1');
		}
		else if (!leading_zeros)
		{
			_putchar('0');  /*Print '0' after the first '1'*/
		}
		val >>= 1;
	}

	/*Print '0' if the input is zero*/
	if (leading_zeros)
		_putchar('0');
}
