#include "main.h"
/**
 * get_bit - this function returns the value of a bit at a given index.
 * @n : param 1.
 * @index :the given index.
 * If the index is greater than or equal to the
 * number of bits in n,
 * return -1.
 * Return: 1 or 0. ie the value of the bit at index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;
	/* Create a mask with only the bit at the specified index set*/
	return ((n & mask) != 0 ? 1 : 0);
	/*
	 * Here, we are checking if the bit at the specified index is set
	 * and return 1 if true, 0 otherwise.
	 */
}
