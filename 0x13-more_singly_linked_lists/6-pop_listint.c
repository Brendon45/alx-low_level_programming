#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list, and returns the head node's data (n)
 * @head: a pointer to the first node
 * Return: it returns 0 if the linked list is empty and data
 * that was deleted
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int number;

	if (head == NULL || *head == NULL)
	return (0);

	number = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (number);
}
