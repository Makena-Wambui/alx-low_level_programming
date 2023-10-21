#include "lists.h"
/**
 * free_list - this function frees a list_t list.
 * @head: pointer to the first node.
 * Return : nothing.
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
