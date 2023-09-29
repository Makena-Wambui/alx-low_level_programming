#include <stdio.h>
/**
 * main- this function prints its own name.
 * @argc: number of arguments passed to the program.
 * @argv: one dimensional array of strings.
 * Return:(0) Exit success.
 */

int main(int argc, char *argv[])
{
	(void)argc;/* suppress compiler warnings */
	printf("%s\n", argv[0]);
	return (0);
}
