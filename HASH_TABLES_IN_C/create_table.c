#include "lists.h"
Hash_table* create_table(int size)
{
	int i;

	Hash_table* table = (Hash_table*) malloc(sizeof(Hash_table));
	/* the size parameter passed to the function is assigned to
	 * the size member of the table.
	 */
	table->size = size;
	/* hash table is empty. */
	table->count = 0;
	table->items = (Ht_item**) calloc(table->size, sizeof(Ht_item*));
	/* use a for loop to initialize each elemnt of the items array to NULL.*/
	for (i = 0; i < table->size; i++) 
	{
		table->items[i] = NULL;

	}
	return (table);
}
