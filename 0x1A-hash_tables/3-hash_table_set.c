#include "hash_tables.h"

/**
 * create_node - this function creates a node of a linked list.
 * @key: key
 * @value: value
 * Return: new_node
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->next = NULL;

	return (new_node);
}

/**
 * hash_table_set - this function adds a new element to
 * a hash table.
 *
 * @ht: a hash table
 * @key: key
 * @value: value
 *
 *Return: 0 on failure, 1 on success.
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	/* let us create the node.*/
	new_node = create_node(key, value);

	/* then call on key_index to generate index.*/
	index = key_index((unsigned char *) key, ht->size);

	/* if that index is empty*/
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		return (1);
	}

	/*if the key exists, just update its value.*/
	else
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(ht->array[index]->value);
			strcpy(ht->array[index]->value, value);
			return (1);
		}

		/* let us handle a collision */
		else
		{
			new_node->next = ht->array[index];
			ht->array[index] = new_node;
			return (1);
		}
	}
	return (1);
}
