#include "lists.h"

/**
 * print_listint - a function that prints all elements of a listint_t list
 * @h:  header of list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		number++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (number);
}
