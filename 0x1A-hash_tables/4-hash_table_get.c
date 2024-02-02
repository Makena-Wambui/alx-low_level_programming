#include "hash_tables.h"
/**
 * hash_table_get - this function retrieves a value associated with a key.
 * @ht: the table we are searching.
 * @key: the key whose value we are retrieving.
 * Return: the value, or NULL.
 *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ind;
	hash_node_t *node;

	/* add checks*/
	if (key == NULL || ht == NULL || *key == '\0')
		return (NULL);

	ind = key_index((unsigned char *) key, ht->size);
	node = ht->array[ind];

	if (node != NULL)
	{
		/* add code for traversal.*/
		while (node != NULL)
		{
			/* check if node is null before accessing its properties.*/
			if (node != NULL && strcmp(node->key, key) == 0)
			{
				return (node->value);
			}
			node = node->next;
		}
	}
	return (NULL);
}
