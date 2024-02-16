#include "hash_tables.h"
/**
 * hash_table_get - this function retrieves a value
 * associated with a certain key.
 *
 * @ht: the hash table
 * @key: key whose value we are searching for.
 *
 * Return: value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *) key, ht->size);
	node = ht->array[index];

	if (node != NULL)
	{
		while (node != NULL)
		{
			if (node != NULL && strcmp(node->key, key) == 0)
				return (node->value);
			node = node->next;
		}
	}
	return (NULL);
}
