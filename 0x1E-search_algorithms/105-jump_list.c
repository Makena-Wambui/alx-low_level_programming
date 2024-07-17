#include "search_algos.h"
/**
 * jump_list - this function performs a jump search on a singly linked list.
 * @list: a pointer to the head of the list to search in.
 * @size: the number of nodes in list.
 * @value: value to search for.
 *
 * Description: We are searching the linked list by jumping ahead by a
 * fixed number of steps, instaed of searching sequentially.
 *
 *
 *
 * current - this is the current node being examined.
 * prev - this is the previous node from where the
 * jump started.
 *
 * jump_interval - this is the number of nodes to jump.
 * Calculated as the squareroot of the list's size.
 *
 * loop continues jumping ahead by jump_interval,
 * until the value at the jump node is greater than
 * or equal to the target value or the end of the list is reached.
 * After each jump, it prints the value at the current node being checked.
 *
 * Once the block where the value could be is identified,
 * perform a linear search within this block.
 * Print each value as it is checked.
 *
 * Return: NULL or a pointer to the first node where value is located.
 *
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump_interval, step;
	listint_t *current, *prev;

	if (list == NULL)
		return (NULL);

	jump_interval = sqrt(size);

	for (current = prev = list; current->index + 1 < size && current->n < value;)
	{
		prev = current;

		for (step = 0; step < jump_interval && current->next != NULL; step++)
		{
			current = current->next;
		}
		printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
		prev->index, current->index);

	for (; prev->index < current->index && prev->n < value; prev = prev->next)
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
	printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);

	if (prev->n == value)
		return (prev);

	else
		return (NULL);
	/*return (prev->n == value ? prev : NULL);*/
}
