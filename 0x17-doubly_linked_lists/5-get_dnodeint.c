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
	unsigned int count;

	if (index)
	{
		if (index == 0)
			return (head);
		count = 0;
		while (temp != NULL)
		{
			if (count == index)
				return (temp);
			count++;
			temp = temp->next;
		}
	}
	else
	{
		return (NULL);
	}

	return (temp);
}
