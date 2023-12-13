#include "lists.h"
/**
 * free_dlistint - this function frees a doubly linked list.
 * @head: pointer to the head node.
 * Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *ptr;

	/* check for empty list*/
	if (head == NULL)
	{
		return;
	}
	temp = head;
	/* traverse list and free the nodes */
	while (temp != NULL)
	{
		ptr = temp->next; /* reference to the next node */
		free(temp); /* free current node */
		temp = ptr; /* move to next node */
	}
	head = NULL; /* then set head to null to show an empty list */
}
