#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: a pointer to the first node
 * Return: nothing on success
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL || *head == NULL)
	return;
	while ((*head)->next != NULL)
	{
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	}
	free(*head);
	*head = NULL;
}
