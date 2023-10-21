#include "lists.h"
/**
 * before_main - this function  prints to stdout before
 * main function is executed.
 * use the __attribute__((constructor)) attribute to define a function
 * that will be executed before the main function.
 * Return : nothing.
 */
void before_main(void) __attribute__((constructor));


void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
