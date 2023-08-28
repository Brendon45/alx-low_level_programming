#include "lists.h"

/**
 * listint_len - returns the number of elementsin a linked listint_t list
 * @h: header of the pointer
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nums;

	if (h == NULL)
	{
	return (0);
	}
	for (nums = 0; h != NULL; nums++)
	{
	h = h->next;
	}
	return (nums);
}
