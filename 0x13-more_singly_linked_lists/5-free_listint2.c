#include "lists.h"
/**
 * free_listint2 - this function frees a listint_t list.
 * @head : pointer to pointer.
 * Return: void.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *ptr;

	/* do not dereference a nill pointer*/
	if (*head != NULL)
	{
		ptr = *head;
		while ((temp = ptr) != NULL)
		{
			ptr = ptr->next;
			free(temp);
		}

		*head = NULL;

	}
}
