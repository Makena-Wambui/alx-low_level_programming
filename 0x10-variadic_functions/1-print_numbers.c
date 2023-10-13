#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - this function prints numbers, followed by a new line.
 * @separator : number separator
 * @n:numbers passed to that function.
 * Return:void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int a;

	if (separator == NULL)
		return;
	va_start(p, n);
	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(p, unsigned int));
	/*print separator after each number except the last one*/
		if (separator && a < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
