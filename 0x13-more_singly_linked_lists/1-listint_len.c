#include "lists.h"
/**
 * listint_len - this is a function that returns the number
 * of elements in a linked listint_t list.
 * @h : pointer to const struct listint_t.
 * Return: len. (number of elements) .
 */

size_t listint_len(const listint_t *h)
{
	unsigned int len = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}
	return (len);
}
