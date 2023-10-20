#include "lists.h"
/**
 * print_list - this function prints all the elements of a list_t list.
 * @h : this is a pointer to the first node in the singly linked list.
 * Return: totl (the number of nodes.)
 */

size_t print_list(const list_t *h)
{
	size_t total = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		total++;
	}
	return (total);
}
