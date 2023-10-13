#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - this function prints strings, followed by a new line.
 * @separator : separator between strings.
 * @n : number of strings.
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(s);
	unsigned int a;
	char *string;

	va_start(s, n);

	for (a = 0; a < n; a++)
	{
		string = va_arg(s, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (separator && a < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(s);
}
