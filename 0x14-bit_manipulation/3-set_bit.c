#include "main.h"
/**
 * set_bit - this function sets the value of a bit to 1 at a given index.
 * @n : param 1.
 * @index: index.
 * Return: 1 on success or -1 if an error occured.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		/*If the index is greater than or equal to the number of bits*/
		return (-1); /*indicate failure.*/
	}
	*n |= (1UL << index);/*Bitwise OR to set the bit at the specified index to 1*/
	return (1); /*Return 1 to indicate success.*/
}
