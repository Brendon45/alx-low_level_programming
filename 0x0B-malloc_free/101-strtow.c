#include "main.h"
#include <stdlib.h>

/**
 * ch_new_grid - main entry
 * @grid: input arguments
 * @height: input the height
 * Return: nothing on success
 */
void ch_new_grid(char **grid, size_t height)
{
	if (grid != NULL && height != 0)
	{
	for (; height > 0; height--)
	free(grid[height]);
	free(grid[height]);
	free(grid);
	}
}

/**
 * strtow - splits a string into two words
 *
 * @str: array of strings
 * Return: a pointer to the array of words
 */

char **strtow(char *str)
{
	char **ptr;
	int b, height, a, k, v;

	if (str == NULL || *str == '\0')
	return (NULL);
	for (b = height = 0; str[b] != '\0'; b++)
	if (str[b] != ' ' && (str[b + 1] == ' ' || str[b + 1] == '\0'))
	height++;
	{
	ptr = malloc((height + 1) * sizeof(char *));
	}
	if (ptr == NULL || height == 0)
	{
	free(ptr);
	return (NULL);
	}
	for (a = v = 0; a < height; a++)
	{
	for (b = v; str[b] != '\0'; b++)
	{
	if (str[b] == ' ')
	v++;
	if (str[b] != ' ' && (str[b + 1] == ' ' || str[b + 1] == '\0'))
	{
	ptr[a] = malloc((b - v + 2) * sizeof(char));
	if (ptr[a] == NULL)
	{
	ch_new_grid(ptr, a);
	return (NULL);
	}
	break;
	}
	}
	for (k = 0; v <= b; v++, k++)
	ptr[a][k] = str[v];
	ptr[a][k] = '\0';
	}
	ptr[a] = NULL;
	return (ptr);
}
