#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * print_list - a function that prints all elements of a list_t list
 * @h: a pointer to be printed
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int a;

	if (h == NULL)
	return (0);
	for (a = 1; h->next != NULL; a++)
	{
	if (h->str == NULL)
	printf("[0] (nil)\n");
	else
	{
		printf("[%u] %s\n", h->len, h->str);
	}
	h = h->next;
	}
		printf("[%u] %s\n", h->len, h->str);
	return (a);
}
