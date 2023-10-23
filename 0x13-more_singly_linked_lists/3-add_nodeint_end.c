#include "lists.h"
/**
 * add_nodeint_end - this function adds a new node
 * at the end of a listint_t list.
 * @head: double pointer
 * @n: const int n.
 * Return: newnode. (address of the new element).
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = 0;
	if (*head == 0)
	{
		*head = newnode;
		return (newnode);
	}
	else
	{
	temp = *head;
	while (temp->next != 0)
	{
		temp = temp->next;
	}
	}
	temp->next = newnode;
	return (newnode);
}
