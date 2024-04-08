#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array
 * of integers using binary search.
 *
 * @array: A pointer to the first element of the array to search
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: If the value is not present or the array is NULL, -1.
 * else, the index where the value is located.
 *
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1); /* Return -1 if array is NULL */

	for (left = 0, right = size - 1; right >= left;)
	{
		/* Print the subarray being searched */
		printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2; /* Calculate mid index */
	if (array[i] == value)
		return (i); /* Return index if value is found */
	if (array[i] > value)
		right = i - 1; /* Adjust right boundary */
	else
		left = i + 1; /* Adjust left boundary */
	}

	return (-1); /* Return -1 if value is not found */
}
