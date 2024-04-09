#include "search_algos.h"

/**
 * rec_search - Searches for a value in an array of
 *              integers using the Binary search algorithm recursively.
 * @array: Pointer to the first element of the array to search.
 * @size: Size of the array.
 * @value: Value to search for.
 *
 * Return: If the value is found, the index of the number.
 *         If the value is not present or the array is NULL, -1.
 */
int rec_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t b;

	/* Check if the array is NULL or empty */
	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	/* Print the elements of the array */
	for (b = 0; b < size; b++)
		printf("%s %d", (b == 0) ? ":" : ",", array[b]);
	printf("\n");

	/* Adjust the middle index if the size is even */
	if (half && size % 2 == 0)
		half--;

	/* Check if the middle element is the target value */
	if (value == array[half])
	{
		/* Recursively search the left subarray if the size is > 1 */
		if (half > 0)
			return (rec_search(array, half + 1, value));
		return ((int)half); /* Return the index of the target value */
	}

	/* Recursively search the left or right subarray based on the value */
	if (value < array[half])
		return (rec_search(array, half + 1, value));
	half++;
	return (rec_search(array + half, size - half, value) + half);
}

/**
 * advanced_binary - It calls rec_search to return the index of the number.
 * @array: Pointer to the first element of the array to search.
 * @size: Size of the array.
 * @value: Value to search for.
 *
 * Return: If the value is found, the index of the number.
 *         If the value is not present or the array is NULL, -1.
 */
int advanced_binary(int *array, size_t size, int value)
{
	int idx;

	/* Call rec_search to perform the binary search */
	idx = rec_search(array, size, value);

	/* Check if the value is found and matches the target value */
	if (idx >= 0 && array[idx] != value)
		return (-1);

	return (idx); /* Return the index of the target value */
}
