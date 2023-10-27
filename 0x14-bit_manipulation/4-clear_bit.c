#include "main.h"
/**
 * clear_bit - this function sets the value of a bit to 0 at a given index.
 * @n: number.
 * @index: index.
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		/*
		 * If the index is greater than or equal
		 * to the number of bits in unsigned long int
		 */
		return (-1); /*Return -1 to indicate an error*/
	}
	*n &= ~(1UL << index); /* & and ~ sets the bit at the specified index to 0*/
	return (1); /*1 indicates success.*/
}
