#ifndef _FUNCTION_POINTERS_H
#define _FUNCTION_POINTERS_H
#include <unistd.h>

void print_name(char *name, void (*f)(char *));
int _putchar(char c);


#endif /*#ifndef _FUNCTION_POINTERS_H*/
