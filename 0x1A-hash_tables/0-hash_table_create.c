#include "hash_tables.h"
/**
 * hash_table_create - this function creates a hash table.
 * @size: this is the size of the hash table or array.
 * Return: table, which is a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int a;
	hash_table_t *table = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (table == NULL)
	{
		printf("Malloc failure.\n");
		return (NULL);
	}

	table->size = size;
	table->array = (hash_node_t **) calloc(table->size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		printf("Calloc Failure.\n");
		return (NULL);
	}
	for (a = 0; a < table->size; a++)
	{
		table->array[a] = NULL;
	}
	return (table);
}
