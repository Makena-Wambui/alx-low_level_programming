#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - this function returns the sum of all its parameters.
 * @n : number of arguments.
 * Return: total..
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int z;
	int total = 0;
	va_list a;

	if (n == 0)
		return (0);
	va_start(a, n);

	for (z = 0; z < n; z++)
		total = total + va_arg(a, int);
	va_end(a);

	return (total);
}
