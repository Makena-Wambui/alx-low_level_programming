#include "lists.h"
/**
 * free_listint2 - this function frees a listint_t list.
 * @head : pointer to pointer.
 * Return: void.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
