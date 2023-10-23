#include "lists.h"
/**
 * insert_nodeint_at_index - this function inserts a
 * new node at a given position.
 * @head: double pointer.
 * @idx: index
 * @n: n.
 * Return: newnode ie address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp;
	unsigned int len = 0;
	unsigned int a = 0;

	idx = 0;
	/*calculate length of list*/
	temp = *head;
	while (temp != 0)
	{
		temp = temp->next;
		len++;
	}
	if (idx > len)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = 0;
	/*fix node at the beginning of the list*/
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	temp = *head;
	for (a = 0; a < idx - 1; a++)
	{
		temp = temp->next;
	}
	newnode->next = temp->next;
	temp->next = newnode;

	return (newnode);
}
