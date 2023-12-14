#include "lists.h"
/**
 * get_dnodeint_at_index - this function returns the nth
 * node of a dlistint_t linked list
 * @head: pointer to the first node of the list
 * @index: index of the node
 * Return: pointer to node
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count = 0;

	while (temp != NULL && count < index)
	{
		temp = temp->next;
		count++;
	}
	return (temp);
}
