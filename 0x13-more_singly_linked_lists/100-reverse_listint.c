#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list
 * @head: a pointer to the first node
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr = NULL;
	listint_t *next = '\0';

	while (*head)
	{
	next = (*head)->next;
	(*head)->next = curr;
	curr = *head;
	*head = next;
	}
	*head = curr;
	return (*head);
}
