#include "lists.h"
/**
 * free_myversion - thsi function frees a linked list
 * of type my_version.
 * @head: double pointer to the first node.
 * Return: void.
 */

void free_myversion(my_version **head)
{
	my_version *temp, *ptr;

	if (head != 0)
	{
		/*initialize ptr to the head of the list*/
		ptr = *head;
		/*assign current node being processed to temp*/
		while ((temp = ptr) != 0)
		{
			ptr = ptr->next;
			free(temp); /*free current node*/
		}
		*head = 0;

	}
}
/**
 * print_listint_safe - this function prints a listint_t linked list.
 * @head: pointer to the first node.
 * Return: count. (number of nodes.)
 * Descripttion: This function can print lists with a loop.
 * You should go through the list only once.
 * If the function fails, exit the program with status 98.
 */

size_t print_listint_safe(const listint_t *head)
{
	/**
	 * already_visited LL stores the pointers of nodes already visited.
	 * temp stores current pointer
	 * use hare to traverse already_visited LL to check for loops.
	 */
	my_version *already_visited, *temp, *hare;
	size_t count = 0;

	already_visited = NULL;
	while (head != NULL)
	{
		temp = malloc(sizeof(my_version));

		if (temp == 0)
			exit(98);
		temp->am = (void *)head;
		temp->next = already_visited;
		already_visited = temp;

		hare = already_visited;
		while (hare->next != 0)
		{
			hare = hare->next;
			if (head == hare->am) /*loop detected*/
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_myversion(&already_visited);
				return (count);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}
	free_myversion(&already_visited);
	return (count);
}
