#include "hash_tables.h"
/**
 * hash_djb2 - This is a hash function
 * It is an implementation of the djb2 algorithm
 * @str: string used to generate hash value
 * It is composed of unsigned characters.
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c; /* s variable will store the ascii value of each char*/

	/**
	 * function initializes variable hash to a
	 * constant value, 5381.
	 * This is the initial hash value.
	 */
	hash = 5381;
	/**
	 * iterate through each char in str.
	 * the while loop will continue as long as a null byte is not encountered,
	 */
	while ((c = *str++))
	{
		/* for each character in the string update the hash value.*/
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
