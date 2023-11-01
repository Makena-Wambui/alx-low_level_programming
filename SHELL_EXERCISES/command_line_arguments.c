#include <stdio.h>
/**
 * main - this is the entry point.
 * @argc: number of arguments.
 * @argv : a null terminated array of strings.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("Argument number: %d\t Name of argument: %s\n", a, argv[a]);
	return (0);
}
