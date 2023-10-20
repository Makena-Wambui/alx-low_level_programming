#include "lists.h"
/**
 * list_len - this function returns the number of elements in list_t.
 * @h : onst pointer to list_t.
 *
 * Return: len (length of the linked list)
 *
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
