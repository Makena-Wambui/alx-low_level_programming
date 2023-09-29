#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - this function prints the sum of int arguments.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0 on exit success.
 */
int main(int argc, char *argv[])
{
	int total = 0;
	int a;/*To iterate through the string arguments*/
	int b;/*To iterate through each char in the string itself*/

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{	/*check for non digit characters with if condition*/
			if (!isdigit(argv[a][b]))
			{
			printf("Error\n");
			return (1);
			}
		}
	
	total = total + atoi(argv[a]);
	}
	printf("%d\n", total);
	}
	return (0);
}
