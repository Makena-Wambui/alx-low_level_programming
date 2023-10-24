#include "lists.h"
/**
 * delete_nodeint_at_index - this function deletes a node at given index
 * @head : double pointer.
 * @index : index of the node that is going to be deleted.
 * Return: 1 on success, -1 on failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *dnode; /*d node is a pointer to the node that is being deleted.*/
	unsigned int a; /*a is for traversing the list till index - 1*/

	/*empty list*/
	if (head == NULL || *head == NULL)
		return (-1);
	/*deleting the first node*/
	if (index == 0)
	{
		dnode = *head;
		*head = (*head)->next;
		free(dnode);
		return (1);
	}
	/*traverse using a to a position just before dnode*/
	a = 0;
	temp = *head;
	while (a < index - 1 && temp->next != 0)
	{
		temp = temp->next;
		a++;
	}
	/*out of bounds index*/
	if (temp->next == 0)
		return (-1);
	dnode = temp->next;
	temp->next = dnode->next;
	free(dnode);
	return (1);
}
