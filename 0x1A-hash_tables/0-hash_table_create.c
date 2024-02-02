#include "hash_tables.h"

/**
 * hash_table_create - this function creates a hash table.
 * @size: size of the array.
 *
 * Return: table ie a pointer to a hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int a;

	/* let us allocate memory for the hash table structure.*/

	hash_table_t *table = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (table == NULL)
	{
		printf("Malloc failure.\n");
		return (NULL);
	}
	/* let us set the size of the table to size.*/
	table->size = size;

	table->array = (hash_node_t **) calloc(table->size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		printf("Calloc failure.\n");
		return (NULL);
	}

	/* let us initialize each pointer to NULL.*/
	for (a = 0; a < table->size; a++)
	{
		table->array[a] = NULL;
	}

	return (table);
}
