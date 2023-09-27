#include "main.h"
/**
 * factorial - this functin calculates the factorial of an int.
 * @n: an int parameter.
 * Return: an int.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
