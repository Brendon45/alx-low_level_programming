#include "lists.h"
/**
 * func_listp - a function that will free the list
 * @head: a pointer to the first node
 * Return: Nothing on success
 */
void func_listp(listp_t **head)
{
	listp_t *tmp;
	listp_t *prv;

	if (head != NULL)
	{
	prv = *head;

	while ((tmp = prv) != NULL)
	{
		prv = prv->next;
		free(tmp);
	}
	*head = NULL;
	}
}

/**
 * print_listint_safe - a function that prints a listint_t linked list
 * @head: a pointer to the first node
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	listp_t *ptr, *crr, *plus;

	ptr = NULL;
	while (head != NULL)
	{
	crr = malloc(sizeof(listp_t));

	if (crr == NULL)
	exit(98);
	crr->p = (void *)head;
	crr->next = ptr;

	plus = ptr;

	while (plus->next != NULL)
	{
	plus = plus->next;
	if (head == plus->p)
	{
		printf("-> [%p] %d\n", (void *)head, head->n);
		func_listp(&ptr);
		return (nodes);
	}
	}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}
	func_listp(&ptr);
	return (nodes);
}
