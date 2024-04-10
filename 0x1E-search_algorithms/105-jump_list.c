#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @list: a pointer to the head of the list to search in
 * @size: the number of nodes in list
 * @value: value to search for.
 * Return: index of the number
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t index, b, c;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);

	c = (size_t)sqrt((double)size);
	index = 0;
	b = 0;

	do {
		prev = list;
		b++;
		index = b * c;

		while (list->next && list->index < index)
			list = list->next;

		/* If reached the end of the list, adjust the jump index */
		if (list->next == NULL && index != list->index)
			index = list->index;

		/* Print the node checked during the jump */
		printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);

	} while (index < size && list->next && list->n < value);

	/* Print the range where the value is expected to be found */
	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->index, (int)list->index);

	/* Search linearly within the identified range for the target value */
	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
