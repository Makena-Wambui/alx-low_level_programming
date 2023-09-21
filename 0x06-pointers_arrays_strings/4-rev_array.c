#include "main.h"
/**
 * reverse_array - this function reverses the elements of an array.
 * @a:integer array.
 * @n: size of array.
 *
 * Return: void.
 * reversing the first half swaps elements with the second half
 * effectively reversing the entire array.
 * t = a[s] stores the value of a[s] (the current element) in the variable t.
 * a[s] is then set to the value of the corresponding element
 * from the end of the array, which is a[n - 1 - s].
 * Finally sets the corresponding element from
 * the end of the array (a[n - 1 - s]) to the value stored in t.
 */
void reverse_array(int *a, int n)
{
	/*s and t are for iteration and temp storage*/
	int s, t;

	/* loop through first half of the array*/
	for (s = 0; s < n / 2; s++)
	{
		t = a[s]; /*store value of  a[s] in t*/
		a[s] = a[n - 1 - s];/*set a[s] to to correspondimg element from the end*/
		/**
		 * Set the corresponding element from the end of the
		 * array to the value stored in t.
		 */
		a[n - 1 - s] = t;
	}
}
