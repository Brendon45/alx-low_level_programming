#include "lists.h"

/**
 * print_listint - a function that prints all elements of a listint_t list
 * @h:  header of list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nums;

	if (h == NULL)
	return (0);
	for (nums = 0; h != NULL; nums++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nums);
}
