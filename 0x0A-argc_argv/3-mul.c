#include <stdio.h>
#include <stdlib.h>
/**
 * main - this function calculates the multiplication
 * of two integers.
 * @argc: argument count.
 * @argv: argument vector.
 * Return:1 if argc < 3, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int one;
	int two;
	int result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	/**
	 * atoi converts string to int.
	 * use atoi on individual string argument.
	 */
	one = atoi(argv[1]);
	two = atoi(argv[2]);
	result = one * two;
	
	printf("%d\n", result);

	return (0);
}

