#include "lists.h"

/**
 * let us print the index, key and value of each item in the hash table.
 */
void print_table(Hash_table * table)
{
	int i;

	for (i = 0; i < table->size; i++)
	{
		if (table->items[i])
		{
			printf("Index: %d, Key: %s, Value: %s\n", i, table->items->key, table->items->value);
		}
	}
}
