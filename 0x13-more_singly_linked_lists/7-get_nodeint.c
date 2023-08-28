#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: a pointer to the first node
 * @index: index of the node, starting at 0
 * Return: NULL, if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int y;

	for (y = 0; y < index; y++)
	{
	if (head == NULL)
		return (NULL);
	head = head->next;
	}
	return (head);
}
