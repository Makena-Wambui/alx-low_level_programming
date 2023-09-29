#include <stdio.h>
/**
 * main- this function prints the arguments passed to a program.
 * @argc : argument count.
 * @argv: argument vector.
 * Return:(0) Exit success.
 */
int main(int argc, char *argv[])
{
	int a;/*for indexing in the array.*/

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
