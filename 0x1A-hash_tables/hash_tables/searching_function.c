#include "lists.h"
/**
 * create a function search that checks if a key exists,
 * returns the corresponding value if the key exists.
 */
char *search(Hash_Table *table, char *key)
{
	/**
	 * index = key_index(key, size);
	 * 
	 */
	Ht_item *item = table->items[index];
	if (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
		{
			return (item->value);
		}
	
	}
	return (NULL);

}
