#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list
 * @h: a pointer to the first node to be printed
 * Return: the size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	int res;
	listint_t *tmp;

	if (!h || *h)
	{
		return (0);
	}
	while (*h)
	{
	res = *h - (*h)->next;
	if (res > 0)
	{
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
		size++;
	}
	else
	{
	free(*h);
	*h = '\0';
	size++;
	break;
	}
	}
	*h = '\0';
	return (size);
}
