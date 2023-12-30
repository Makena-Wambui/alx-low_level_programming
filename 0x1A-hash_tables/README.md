WHAT IS A HASH FUNCTION?
 hash function is a way of transforming a piece of data such as a number or a word, into a smaller value which can be used as an index in a table,.

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
