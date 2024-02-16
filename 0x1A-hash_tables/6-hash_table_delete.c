#include "hash_tables.h"
/**
 * hash_table_delete - this function deletes a hash table.
 *
 * @ht: the hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int a;
	hash_node_t *node, *ptr;

	if (ht == NULL)
		return;


	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
			node = ht->array[a];

		if (node != NULL)
		{
			while (node != NULL)
			{
				ptr = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = ptr;
			}
		}
	}
	free(ht->array);
	free(ht);
}
