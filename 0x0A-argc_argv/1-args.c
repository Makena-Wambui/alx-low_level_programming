#include <stdio.h>
/**
 * main - this function prints the number of arguments
 * passed to a program.
 * @argc: no of arguments supplied to a program.
 * @argv: an array of strings.
 * Return:(0) Exit Success.
 */
int main(int argc, char *argv[])
{
	(void)*argv;/*supress compiler warnings*/
	if (argc == 1)
	{
		printf("0\n");
	}
	else
		printf("%d\n", argc - 1);
	return (0);
}
