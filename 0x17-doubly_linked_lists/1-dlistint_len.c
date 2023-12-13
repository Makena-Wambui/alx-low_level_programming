#include "lists.h"
/**
 * dlistint_len - this function returns the number of
 * elements in a linked dlistint_t list.
 * @h: pointer to node
 * Return: number ie length of the doubly linked list
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length;
	const dlistint_t *temp;

	length = 0;
	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		length++;
	}
	return (length);
}
