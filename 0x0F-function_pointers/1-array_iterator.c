#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - a function that executes a function given as
 * a parameter on each element of an array
 * @array: the array to be used
 * @size: the size of the array to be printed
 * @action: a pointer to the function
 * Return:Nothing on Success
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t  b;

	if (array == NULL)
	return;
	if (action == NULL)
	return;
	for (b = 0; b < size; b++)
	{
	action(array[b]);
	}
}
