#include "lists.h"
/**
 * add_nodeint - this function adds a new node at
 * the beginning of a listint_t list.
 * @head : double pointer.
 * @n : constant int n.
 * Return: newnode. (address of newly created node).
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
