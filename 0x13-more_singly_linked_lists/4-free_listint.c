#include "lists.h"
/**
 * free_listint - this function frees a listint_t list.
 * @head : pointer to first node.
 * Return: nothing.
 */

void free_listint(listint_t *head)
{
	/* a temporary pointer that holds the current node being processed*/
	listint_t *temp;

	/**
	 * the loop will run as long as head is not equal to 0.
	 * meaning there are more nodes available in the list.
	 * temp is equal to head, that is do this to preserve the current reference
	 * before proceeding to the next node.
	 * Call free to deallocate memory for the current node.
	 */

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
