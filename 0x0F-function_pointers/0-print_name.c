#include "function_pointers.h"
/**
 * print_name - this function prints a name.
 * @name : param 1.
 * @f : points to a function.
 * Return : void.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
