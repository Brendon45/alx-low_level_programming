#include "search_algos.h"

/**
  * _binary_search - Searches for a value in a sorted array
  * of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @left: The starting index of the [sub]array to search.
  * @right: The ending index of the [sub]array to search.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t b;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (b = left; b < right; b++)
			printf("%d, ", array[b]);
		printf("%d\n", array[b]);

		b = left + (right - left) / 2;
		if (array[b] == value)
			return (b);
		if (array[b] > value)
			right = b - 1;
		else
			left = b + 1;
	}

	return (-1);
}

/**
  * exponential_search - Searches for a value in a sorted array
  * of integers using exponential search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t b = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (b = 1; b < size && array[b] <= value; b = b * 2)
			printf("Value checked array[%ld] = [%d]\n", b, array[b]);
	}

	right = b < size ? b : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", b / 2, right);
	return (_binary_search(array, b / 2, right, value));
}
