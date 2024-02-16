#include "hash_tables.h"
/**
 * hash_table_print - this function prints a hash table.
 *
 * @ht: the hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int a;
	hash_node_t *node;
	/*flag that determines whether the comma is to be printed or not.*/
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		node = ht->array[a];

		if (node != NULL)
		{
			while (node != NULL)
			{
				if (flag == 1)
					printf(", ");

				printf("'%s': '%s'", node->key, node->value);
				flag = 1;
				node = node->next;
			}
		}
	}
	printf("}");
	printf("\n");
}
