#include "lists.h"

/**
 * let us apply a poor hash function to demonstrate
 * hash collisions.
 * This example only utilizes strings (or character arrays.)
 * This is a hash function for strings.
 */
unsigned long hash_function(char* str)
{
	unsigned long i = 0;
	/* iterates through each character in the string */
	int j;

	for (j = 0; str[j]; j++)
	{
		/* then accumulate their ascii values into i */
		i += str[j];
	}
	return (i % CAPACITY);
	/**
	 * returns the result of the modulo of i and Capacity.
	 * The modulo operation ensures that the hash value falls 
	 * within the range of the hash table size.
	 * Soit does not access an unbound memory location leading to an error.
	 * The purpose of a hash function is to map input data to indices
	 * in the hash table.
	 */
}
/**
 * run this code
 * and test different strings for 
 * potential collisions.
 * strings that have the same ascii value will collide.
 */
int main(void)
{	
	unsigned long result;
	unsigned long b;

	result = hash_function("Hel");
	b = hash_function("Cau");
	printf("%ld\n", b);
	printf("%ld\n", result);
	create_item("alice", "tall");
	return (0);
}
