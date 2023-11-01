#include <stdio.h>
/**
 * main - this is the entry point.
 * @argc; number of args.
 * @argv: a null terminated array of strings.
 * Description: we are printing the number of args passed at the CLI to a
 * program without using argc.
 * Return: 0
 */

int main(__attribute__((unused))int argc, char **argv)
{
	int a;

	for (a =0; argv[a] != NULL; a++)
		printf("arguments: %s\n", argv[a]);
	return (0);
}
