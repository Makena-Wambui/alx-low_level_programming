#include "lists.h"
/**
 * print_listint - this function  prints all the elements of a listint_t list.
 * @h : this is a pointer to sruct.
 * Return: count. (the number of nodes).
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;
	const listint_t *temp;

	temp = h;
	count = 0;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
