#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - a function that adds a new node at the end of a list_t list
 * @head: pointer to the list
 * @str: string to be printed in the new node
 * Return: the address of the new element, or
 * NULL, if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *size = *head;
	unsigned int len = 0;

	while (str[len])
	{
	len++;
	}
	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		return (NULL);
	}
	else
	{
		new_node->str = strdup(str);
		new_node->len = len;
		new_node->next = NULL;
	}
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (size->next)
	size = size->next;
	size->next = new_node;
	return (new_node);
}
