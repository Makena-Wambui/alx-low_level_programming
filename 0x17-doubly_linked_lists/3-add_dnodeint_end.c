#include "lists.h"
/**
 * add_dnodeint_end - this function adds a new node at the
 * end of a dlistint_t list.
 * @head: pointer to pointer to the head node
 * @n: element in new node
 * Return: newnode ie address of newly added node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head; 
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		printf("Malloc Failure.\n");
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
		newnode->prev = temp;
	}
	return (newnode);
}
