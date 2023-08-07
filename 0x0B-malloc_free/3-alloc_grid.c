#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * of integers
 * @width: the width
 * @height: the height
 * Return: a pointer to 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int l, m;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}
	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
	{
	free(ptr);
	return (NULL);
	}
	for (l = 0; l < height; l++)
	{
	ptr[l] = malloc(width * sizeof(int));
	if (ptr[l] == NULL)
	{
	for (l--; l >= 0; l--)
	free(ptr[l]);
	free(ptr);

	return (NULL);
	}
	}
	for (l = 0; l < height; l++)
	{
	for (m = 0; m < width; m++)
	ptr[l][m] = 0;
	}
	return (ptr);
}
