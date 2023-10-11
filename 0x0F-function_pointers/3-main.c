#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - this is the main function.
 * @argc : number of arguments.
 * @argv : array of strings supplied to the program.
 * Return: 0 (on success)
 */

int main(int argc, char *argv[])
{
	int (*f)(int a, int b);
	int x, y, z;

	f = get_op_func(argv[2]);
	if (f == NULL)
		return (98);

	if (argc > 4 || argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((argv[2][0] != '-' && argv[2][0] != '+' && argv[2][0] != '*' &&
		argv[2][0] != '/' && argv[2][0] != '%') || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	z = f(x, y);
	printf("%d\n", z);

	return (0);
}
