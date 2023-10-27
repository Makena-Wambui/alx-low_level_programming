#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b : a string representing a binary number
 * Return: val (the converted number)
 * Description : val stores the converted number.
 * a is to iterate throught the string.
 * The first if checks for a null or empty string.
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	unsigned int a = 0;

	if (!b || !*b)
		return (0);
	/* lets use a while loop to traverse the string till '\0'*/
	while (b[a])
	{
		/*check for characters other than 1 or 0*/
		if (b[a] > 49) /*49 is ASCII of 1*/
			return (0);
		else if (b[a] == 49)
		{	/*if current char is 1*/
			val <<= 1; /*left shift val by 1 bit*/
			val = val + 1; /* add 1 to val*/
		}
		else
			val <<= 1; /* if b[a] is 0 just left shift by 1*/
		a++;
	}
	return (val);
}
