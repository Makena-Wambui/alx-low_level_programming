#include "hash_tables.h"
/**
 * hash_table_print - this function prints a hash table.
 * @ht: this is the hash table.
 * Return: void.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	/*included a flag that detetmines whether a comma should be printed or not.*/
	int flag = 0;


	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node != NULL)
		{
			while (node != NULL)
			{
				/**
				 * if flag is 1,
				 * print a comma before the next pair.
				 * Set the flag to 1 after printing the first pair.
				 */
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
