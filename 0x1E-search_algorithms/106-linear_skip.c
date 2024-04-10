#include "search_algos.h"

/**
 * linear_skip - searches for a value in a skip list
 *
 * @list: input list
 * @value: value to search in
 * Return: index of the number
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current_ptr;

	if (list == NULL)
		return (NULL);

	current_ptr = list;

	do {
	list = current_ptr;
	current_ptr = current_ptr->express;
	printf("Value checked at index ");
	printf("[%d] = [%d]\n", (int)current_ptr->index, current_ptr->n);
	} while (current_ptr->express && current_ptr->n < value);

	if (current_ptr->express == NULL)
	{
	list = current_ptr;
	while (current_ptr->next)
		current_ptr = current_ptr->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)current_ptr->index);

	while (list != current_ptr->next)
	{
	printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
	if (list->n == value)
		return (list);
	list = list->next;
	}

	return (NULL);
}
