#include "lists.h"

/**
 * print_dlistint - A function that prints all the elements of a dll
 * @h: head of doubly linked list
 * Return: - number of nodes in the doubly linked list
 *
 * AUTHOR - Brendon Jeje
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int num_of_nodes = 0;

	/* if head passed is NULL */
	if (h == NULL)
		return (0);

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		num_of_nodes++;
	}
	return (num_of_nodes);
}
