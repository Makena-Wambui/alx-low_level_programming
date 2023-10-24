#include "lists.h"
/**
 * get_nodeint_at_index - this function finds a node at a specified index.
 * @head : this ia a pointer to the first node.
 * @index: index /location of the node we are looking for.
 * Return:temp ie nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int idx; /*keeps track of the index we are currently at.*/

	idx = 0;
	temp = head;
	while (temp != 0)
	{
		if (idx == index)
			return (temp);
		idx++;
		temp = temp->next;

	}
	return (NULL);

}
