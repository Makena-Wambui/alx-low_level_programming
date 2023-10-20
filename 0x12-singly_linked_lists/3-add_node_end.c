#include "lists.h"
/**
 * add_node_end - this function adds a node to the end of a list.
 * @head : double pointer.
 * @str : string
 *
 * Return:ptr(address of the new node).
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *endnode, *ptr;
	int a;
	unsigned int len;

	ptr = *head;

	endnode = malloc(sizeof(list_t));
	if (endnode == NULL)
		return (NULL);
	endnode->str = strdup(str);
	a = 0;
	while (str[a] != '\0')
	{
		a++;
		len++;
	}
	endnode->len = len;
	endnode->next = NULL;
	if (ptr == NULL)
		*head = endnode;
	else
	{
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = endnode;
	}
	return (*head);
}
