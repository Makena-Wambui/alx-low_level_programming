#include "main.h"
/**
 * flip_bits - this function returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: param 1.
 * @m: param 2.
 * Description: This function uses ^ to find the bits
 * that differ between the two numbers and then
 * counts the number of set bits in the result.
 * The counting is done using bitwise AND and right shifting in a loop.
 * Return: count ie number of bits you need to
 * flip to get from one number to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result != 0)
	{
		/*Increment count for each set bit in xor_result*/
		count += xor_result & 1;
		xor_result >>= 1; /*Right shift to check the next bit*/
	}
	return (count);
}
