#include "hash_tables.h"
/**
 * hash_table_create - this function creates a hash table
 * structure.
 * @size: size of the hash table array.
 *
 * Return: table which is a pointer to the newly created
 * table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int a;

	/* call malloc to allocate memory for the hash table structure.*/
	table = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;

	table->array = (hash_node_t **) malloc(table->size * sizeof(*(table->array)));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	/**
	 * lets loop throught the array
	 * and initialize all buckets to NULL
	 * when needed, memory will
	 * be allocated for them.
	 */
	for (a = 0; a < table->size; a++)
	{
		table->array[a] = NULL;
	}
	return (table);
}
