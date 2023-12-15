#include "lists.h"
/**
 * delete_dnodeint_at_index - this function deletes the node at index
 * index of a dlistint_t linked list.
 * @head: this is a pointer to a pointer to the head node
 * @index: index of the node to be deleted
 * Return: 1 0n success, -1 on failure
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{	/* check for a null pointer so we dont dereference it*/
		if ((*head)->next != NULL)
		{
			(*head)->next->prev = NULL;
		}
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		while (i < index && temp != NULL)
		{
			temp = temp->next;
			i++;
		}
		if (temp == NULL)
		{
			return (-1);
		}
		if (temp->next != NULL)
		{
			temp->next->prev = temp->prev;
		}
		temp->prev->next = temp->next;
		free(temp);
	}
	return (1);
}
