#include "search_algos.h"

/**
 * linear_skip - This function searches for a value
 * in a sorted skip list of integers.
 *
 * @list: A pointer to the head of the linked list to search.
 * @value: The value to search for.
 *
 * current points to the current node being checked.
 * prev points to the previous node from where the express lane (jump) started.
 *
 * Return: NULL Or a pointer to the first node where the value is located.
 *
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *prev;

	if (list == NULL)
		return (NULL);

	for (current = prev = list; current->next != NULL && current->n < value;)
	{
		prev = current;
		if (current->express != NULL)
		{
			current = current->express;
			printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);
		}
		else
		{
			while (current->next != NULL)
				current = current->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		prev->index, current->index);

	for (; prev->index < current->index && prev->n < value; prev = prev->next)
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
	printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);

	if (prev->n == value)
		return (prev);
	return (NULL);
}
