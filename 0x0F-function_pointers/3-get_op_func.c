#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - this function selects the correct function
 * to perform the operation asked by the user.
 * @s : string enterd by user.
 * Return: int. this is the return value of the
 * function that performs the operation.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		};
	int i;

	i = 0;
	while (i < 5)
	{
		if (s[0] == ops[i].op[0] && s[1] == '\0')
			return (ops[i].f);
	}
	return (NULL);
}
