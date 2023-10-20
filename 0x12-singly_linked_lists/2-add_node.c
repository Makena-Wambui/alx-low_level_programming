#include "lists.h"
/**
 * add_node - this function adds a new node at the beginning of a list.
 * @head: double pointer.
 * @str : string
 * Return: the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	size_t len = 0;
	int a;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	a = 0;
	while (str[a] != '\0')
	{
		len++;
		a++;
	}
	node->len = len;
	node->next = *head;
	*head = node;
	return (node);
}

