#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array
 * of integers using jump search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         else, the first index where the value is located.
 *
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	/* Determine the jump step */
	step = sqrt(size);

	/* Perform jump search */
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	/* Print range of indexes where value may be located */
	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	/* Adjust jump if last block */
	jump = jump < size - 1 ? jump : size - 1;

	/* Perform linear search within block */
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	/* Check if value is found */
	return (array[i] == value ? (int)i : -1);
}
