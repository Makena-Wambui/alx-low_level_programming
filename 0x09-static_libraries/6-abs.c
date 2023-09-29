#include "main.h"
/**
 * _abs - this function prints the absolute value.
 * @num: an integer parameter.
 *
 * Description: This function prints the absolute value of
 * a number to std output.
 *
 * Return: Always num.
 */

int _abs(int num)
{
	if (num < 0)
	{
	num = -num;
	}
	return (num);
}
