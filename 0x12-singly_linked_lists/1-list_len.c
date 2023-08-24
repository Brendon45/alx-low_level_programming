#include "lists.h"
#include <stdio.h>

/**
 * list_len - a function that returns the number of elements
 * in a linked list
 * @h: the pointer to be printed
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	int a;

	if (h == NULL)
	{
	return (0);
	}
	for (a = 1; h->next != NULL; a++)
	h = h->next;
	return (a);
}
