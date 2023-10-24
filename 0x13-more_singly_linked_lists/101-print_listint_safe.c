#include "lists.h"
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
	 * we use two pointers hare and tortoise for traversal.
	 * Hare moves twice as fast as tortoise.
	 * if there is a loop in the list the two will eventually meet ie
	 * tortoise is equal to hare.
	 */
	const listint_t *tortoise, *hare;
	size_t count = 0;

	/*if list is empty*/
	if (head == NULL)
	{
		exit(98);
	}
	tortoise = hare = head;

	while (hare != NULL && hare->next != NULL)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count++;
		tortoise = tortoise->next;
		hare = hare->next->next;

		/*  tortoise = hare so a loop has been detected.*/
		if (tortoise == hare)
		{
			printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
			exit(98);
		}
	}
	return (count);
}
