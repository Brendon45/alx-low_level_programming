#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to the first node
 * @idx: the index of the list where the new node should be added,
 * index starts at 0
 * @n: new node to be printed
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int y;
	listint_t *new_node;
	listint_t *tmp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
	{
	return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
	new_node->next = *head;
	*head = new_node;
	return (new_node);
	}
	for (y = 0; tmp && y < idx; y++)
	{
	if (y == idx - 1)
	{
		new_node->next = tmp->next;
		tmp->next = new_node;
		return (new_node);
	}
	else
	tmp = tmp->next;
	}
	return (NULL);
}
