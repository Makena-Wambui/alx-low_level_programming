#include "lists.h"
Ht_item* create_item(char* key, char* value)
{	/** 
	  * allocate memory using malloc for a new Ht_item structure.
	  * item pointer points to the newly allocated memory.
	  */

	Ht_item* item = (Ht_item*) malloc(sizeof(Ht_item));
	/*then allocate memory for the key string within the Ht_item structure*/
	item->key = (char*) malloc(strlen(key) + 1);
	item->value = (char*) malloc(strlen(value) + 1);
	/* use strcpy to copy contents into the allocated memory
	 * within Jt_iten structure.
	 */
	strcpy(item->key, key);
	strcpy(item->value, value);

	return (item);
	
}
