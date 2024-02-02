#include "hash_tables.h"
/**
 * key_index - this function returns the index of a key.
 * @key: the key
 * @size: size of the array of the hash table.
 * Return: index ie index of key in hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value, index;

	hash_value = hash_djb2(key);
	/**
	 * we use the hash value to determine the index in the hash table.
	 * take the hash value modulo the size of the hash table.
	 * the result is an index within the valid range of the
	 * hash table.
	 */
	index = hash_value % size;
	return (index);
}
