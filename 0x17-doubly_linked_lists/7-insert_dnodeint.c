#include "lists.h"
/**
 * insert_dnodeint_at_index - this function inserts
 * a new node at a given position.
 * @h: double pointer to head
 * @idx: index specified
 * @n: data in new node
 * Return: newnode
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *newnode;
	unsigned int i = 1;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		printf("Malloc failure.\n");
		return (NULL);
	}
	newnode->n = n;
	if (idx == 0)
	{
		add_dnodeint(h, n);
	}
	else
	{
		while (temp != NULL && i < idx)
		{
			temp = temp->next;
			i++;
		}
		if (temp == NULL)
		{
			free(newnode);
			return (NULL);
		} /* invalid index that is out of bounds */
		newnode->next = temp->next;
		newnode->prev = temp;
		if (temp->next != NULL)
		{
			temp->next->prev = newnode;
		}
		temp->next = newnode;
	}
	return (newnode);
}
