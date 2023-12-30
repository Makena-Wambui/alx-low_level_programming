#ifndef LISTS_H
#define LISTS_H
/** The constant CAPACITY defines the size of the hash table.
 * This hash table can hold up to 50000 elements.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CAPACITY 50000
/* let us define the hashtable item.*/
typedef struct Ht_item
{
	char *key;
	char *value;
} Ht_item;
/* let us now define our Hash Table,
 * which contains an array of pointers to items.
 * So a hash table is a double pointer.
 */
typedef struct Hash_Table
{
	Ht_item **items;
	int count; /* hash table will return the number of elements in the hash table. */
	int size; /* size of the hash table*/


} Hash_table;
unsigned long ascii(char *str);
Ht_item *create_item(char *key, char *value);
Hash_table *create_table(int size);
void free_item(Ht_item *item);
void free_table(Hash_table *table);




















#endif /*LISTS_H */
