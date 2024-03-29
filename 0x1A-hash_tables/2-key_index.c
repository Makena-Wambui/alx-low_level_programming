#include "hash_tables.h"

/**
 * key_index - this function returns the index of a key-value
 * pair in the hash table array.
 *
 * @key: key
 * @size: size of the array
 *
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);

	index = hash % size;

	return (index);
}
