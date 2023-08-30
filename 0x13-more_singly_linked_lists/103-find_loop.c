#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list
 * @head: it points to the first node
 * Return: the address of the node where the loop starts, or
 * Null if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *crr = head;
	listint_t *prv = head;

	if (!head)
	return (NULL);
	while (crr && prv && prv->next)
	{
		prv = prv->next->next;
		crr = crr->next;
		if (prv == crr)
		{
			crr = head;
			while (crr != prv)
			{
			crr = crr->next;
			prv = prv->next;
			}
			return (prv);
		}
	}
	return (NULL);
}
