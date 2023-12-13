#include "lists.h"
/**
 * print_dlistint - this function prints all the elements of a dlistint_t list.
 * @h: pointer to node
 * Return: number ie number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t number;

	temp = h;
	number = 0;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		number++;
	}
	return (number);
}
