#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: the input array
 * @size: the size of the array
 * @value: value to search in
 * Return: index of the value if found, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i;  /* Variable to iterate through the array */

	/* Check if the input array is NULL */
	if (array == NULL)
		return (-1);  /* If NULL, return -1 indicating failure */

	/* Iterate through the array to search for the value */
	for (i = 0; i < (int)size; i++)
	{
		/* Print the current element being checked */
		printf("Value checked array[%u] = [%d]\n", i, array[i]);

	/* Check if the current element matches the value */
	if (value == array[i])
		return (i);  /* If found, return the index of the value */
	}

	/* If the value is not found in the array, return -1 */
	return (-1);
}
