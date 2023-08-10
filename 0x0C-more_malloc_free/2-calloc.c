#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: elements of size bytes
 * @size: size of the elements of integer type
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	size_t b;

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}
	m = malloc(nmemb * size);
	if (m == NULL)
	return (NULL);
	for (b = 0; b < (nmemb * size); b++)
	m[b] = 0;
	return (m);
}
