#include <stdio.h>
/**
 * main - this function prints the name of the current source file to stdout.
 * @void : it receives no parameters.
 * Return: 0 on success.
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
