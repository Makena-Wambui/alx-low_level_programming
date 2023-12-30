#include "lists.h"
/* first free each item in the hash table. */
void free_item(Ht_item* item)
{
	free(item->key);
	free(item->value);
	free(item);
}
void free_table(Hash_table* table)
{
	int i;
	/* create a loop that iterates through each bucket in the hash table.
	 * ie table->items.*/
	for (i = 0; i < table->size; i++)
	{
		Ht_item* item = table->items[i];
		/* for each bucket, check if a Ht_item is stored there.*/
		if (item != NULL)
		{
			free_item(item);
		}
	
	}
	free(table->items);
	free(table);
}
