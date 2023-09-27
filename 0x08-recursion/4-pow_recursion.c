#include "main.h"
/**
 * _pow_recursion - this function calculates x raised to
 * the power of y.
 * @x: int that represents the base.
 * @y:int that represents the exponent.
 * Return:int value.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
	{
		return (1);
	}
		return (x * _pow_recursion(x, y - 1));

}
