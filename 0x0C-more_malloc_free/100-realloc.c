#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: size in bytes of the new memory blockk
 * Return: NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pt;
	size_t a, highest = new_size;
	char *prevpt = ptr;

	if (ptr == NULL)
	{
	pt = malloc(new_size);
	return (pt);
	}
	else if (new_size == 0)
	{
	free(ptr);
	return (NULL);
	}
	else if (new_size == old_size)
	{
	return (ptr);
	}
	pt = malloc(new_size);
	if (pt == NULL)
	{
	return (NULL);
	}
	if (new_size > old_size)
	highest = old_size;
	for (a = 0; a < highest; a++)
	pt[a] = prevpt[a];
	free(ptr);
	return (pt);
}
