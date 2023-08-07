#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 * if with a specific char
 * @size: the number of bytess to be allocated
 * @c: character
 * Return: pointer to array, otherwise NULL
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int m;

	ptr = malloc(sizeof(char) * size);
	if (size == 0 || ptr == NULL)
	{
	return (NULL);
	}
	for (m = 0; m < size; m++)
	{
	ptr[m] = c;
	}
	return (ptr);
}
