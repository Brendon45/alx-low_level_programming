#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - it returns the index of the first element for which
 * the cmp function does not return 0
 * @array: an array to be used in a function
 * @size: number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: Always 0 Success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (array == NULL || size <= 0 || cmp == NULL)
	return (-1);
	for (b = 0; b < size; b++)
	{
	if (cmp(array[b]))
	{
	return (b);
	}
	}
	return (-1);
}
