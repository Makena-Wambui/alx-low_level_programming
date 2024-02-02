#include "hash_tables.h"
/**
 * hash_table_delete - this function deletes a hash table using free.
 * @ht: a pointer to the hash table we are deleting.
 * Return: void.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *ptr;
	hash_table_t *tmp = ht;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				/* to mantain access to the next node.*/
				ptr = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = ptr;
			}
		}
	}	
	free(tmp->array);
	free(tmp);
}
