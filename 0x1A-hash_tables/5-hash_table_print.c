#include "hash_tables.h"

/**
 * hash_table_print - A function to print all elements of a hash table
 * @ht: The hash table to be printed.
 *
 * Return: Nothing on (Succeess).
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int a = 0;
	hash_node_t *current;
	int first = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		current = ht->array[a];
		while (current != NULL)
		{
			if (first)
				first = 0;
			else
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
		}
	}
	printf("}\n");
}
