#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * free_list - a function that frees a list_t list
 * @head: pointer from list_t to be freed
 * Return: Nothing on success
 */

void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
	{
		return;
	}
	while (head->next != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
