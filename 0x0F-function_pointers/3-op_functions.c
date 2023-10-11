#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - this function adds two numbers.
 * @a: param 1.
 * @b: param 2.
 * Return: (a + b).
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - this function subtracts two numbers.
 * @a: param 1.
 * @b: param 2.
 * Return: (a - b).
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - this function multiplies two numbers.
 * @a: param 1.
 * @b: param 2.
 * Return: (a * b).
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - this function divides two numbers.
 * @a: param 1.
 * @b: param 2.
 * Return: (a / b). If b = 0, exit with the status 100.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - this function calculates the remainder of the division of a by b.
 * @a: param 1.
 * @b: param 2.
 * Return: (a % b). If b = 0, exit with the status 100.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
