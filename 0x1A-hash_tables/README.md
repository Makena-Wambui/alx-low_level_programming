WHAT IS A HASH FUNCTION?
A hash function is a way of transforming a piece of data such as a number or a word, into a smaller value which can be used as an index in a table,.

The purpose of a hash function is to: make it easier and faster to store, find and retrieve data.

For example, you have a list of names.

You can use a hash function to assign each name a number between 0 and 9.

Then use an array of size 10 to store those names..

where the index in the array is the hash value.

Hence you can quickly look up a name by computing its hash value, 

and checking the corresponding position in the array.

A good hash function should minimize collisions as much as possible.

Collisions happen when two different data items, have the same hash value.

They cause problems when storing or retrieving data.

Since you may get the wrong item or overwrite an existing item.

You can handle collisions by:

1. Using a larger table size
2. Use a different hash function.
3. Use a linked list to store multiple items at the same index.

QUESTION 1:
Write a  function that creates a hash table.
Prototype: hash_table_t *hash_table_create(unsigned long int size);
where size is the size of the array
Returns a pointer to the newly created hash table
If something went wrong, your function should return NULL

QUESTION 2:
Write a hash function implementing the djb2 algorithm.
Prototype: unsigned long int hash_djb2(const unsigned char *str);
This function hash_djb2 is an implementation of the djb2 hash algorithm.

This is a simple and fast algorithm, designed Daniel J. Bernstein.
Commonly used for creating hash functions in various applications such as hash tables.
The input string is an array of unsigned characters. The hash function generates the hash value for this input string.

The return value is an unsigned long int, which is the generated hash value.

QUESTION 3:
Write a function that gives you the index of a key.
Prototype: unsigned long int key_index(const unsigned char *key, unsigned long int size);
where key is the key
and size is the size of the array of the hash table
This function should use the hash_djb2 function that you wrote earlier
Returns the index at which the key/value pair should be stored in the array of the hash table

QUESTION 4:
Write a function that adds an element to the hash table.
Prototype: int hash_table_set(hash_table_t *ht, const char *key, const char *value);
Where ht is the hash table you want to add or update the key/value to
key is the key. key can not be an empty string
and value is the value associated with the key. value must be duplicated. value can be an empty string
Returns: 1 if it succeeded, 0 otherwise
In case of collision, add the new node at the beginning of the list

QUESTION 5:
Write a function that retrieves a value associated with a key.
Prototype: char *hash_table_get(const hash_table_t *ht, const char *key);
where ht is the hash table you want to look into
and key is the key you are looking for
Returns the value associated with the element, or NULL if key couldn’t be found
