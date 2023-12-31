#include "hash_tables.h"
/**
 * node_creation - this function creates a new HashTable node.
 * @key: key
 * @value: value.
 * Return: new, the newly created node.
 */
hash_node_t *node_creation(const char *key, const char *value)
{
	hash_node_t *new = (hash_node_t *) malloc(sizeof(hash_node_t));

	if (new == NULL)
	{
		printf("Malloc failure.\n");
		return (0);
	}
	new->key = malloc(strlen(key) + 1);
	new->value = malloc(strlen(value) + 1);
	strcpy(new->key, key);
	strcpy(new->value, value);
	new->next = NULL;

	return (new);
}
/**
 * hash_table_set - this function adds an element to the hash table.
 * @ht: the hash table we want to insert into.
 * @key: key.
 * @value: value associated with the key.
 * Return: 1 on success, 0 on failure.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;

	if (ht == NULL)
	{
		printf("Cannot insert into a NULL hash table.\n");
		return (0);
	}

	new = node_creation(key, value);
	index = key_index((unsigned char *) key, ht->size);
	/* logic for empty string.*/
	if (key == NULL || *key == '\0')
	{
		printf("Key can not be empty.\n");
		return (0);
	}
	/* if that index is empty, insert directly.*/
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
		return (1);
	}
	/* key already exists, so update value.*/
	else
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			strcpy(ht->array[index]->value, value);
			return (1);
		}
		/* handling collisions.*/
		else
		{
			new->next = ht->array[index];
			ht->array[index] = new;
			return (1);
		}
	}
	return (1);
}
