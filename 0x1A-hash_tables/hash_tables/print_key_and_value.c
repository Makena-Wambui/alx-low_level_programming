#include "lists.h"

/**
 * with this function let us print 
 * the key and its value.
 */
void printer(Hash_Table *table, char *key)
{
	char *value;

	value = search(table, key);
	if (value == NULL)
	{
		printf("Key: %s non existent.\n", key);
	}
	else
	{
		printf("Key: %s, Value: %s\n", key, value);
	
	}

}
