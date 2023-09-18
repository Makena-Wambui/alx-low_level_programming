#include "main.h"
/**
 * swap_int - this function swaps integers.
 * @*a: pointer variable.
 * @*b: pointer variable.
 * @a: integer variable.
 * @b: integer variable.
 *
 * Return : void.
 *
 */

void swap_int(int *a, int *b)
{

	int i;

	i = *a;
	*a = *b;
	*b = i;
}
