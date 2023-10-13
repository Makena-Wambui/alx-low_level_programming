#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - this function prints anything.
 * @format : list of types of arguments passed to the function.
 * Return : void
 */

void print_all(const char * const format, ...)
{
	va_list p;
	unsigned int a;
	char *string;

	va_start(p, format);
	a = 0;
	while (format && format[a])
	{
		switch (format[a])
		{
		case 'c':
			printf("%c", va_arg(p, int));
			break;
		case 'i':
			printf("%i", va_arg(p, int));
			break;
		case 'f':
			printf("%f", va_arg(p, double));
			break;
		case 's':
			string = va_arg(p, char *);
			if (!string)
			{
			printf("(nil)");
			break;
			}
			printf("%s", string);
			break;
		default:
			break;
		}
		if ((format[a + 1] != '\0') && (format[a] == 'c' || format[a] == 'i'
		|| format[a] == 'f' || format[a] == 's'))
			printf(", ");
		a++;
	}
	printf("\n");
	va_end(p);

}

