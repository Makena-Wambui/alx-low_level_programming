#include "lists.h"
/**
 * add_dnodeint - this function adds a new node at the
 * beginning of a dlistint_t list.
 * @head: this is a pointer to the head pointer.
 * @n: element in newnode
 * Return: newnode ie the address of the added node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		printf("Malloc Failure.\n");
		return (NULL);
	}
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = newnode;
	}
	*head = newnode;
	return (newnode);
}
