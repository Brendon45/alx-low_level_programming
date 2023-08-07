#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: integer
 * @av: Double pointer array
 * Return: Always 0 Success.
 */

char *argstostr(int ac, char **av)
{
	int b, e, k = 0, h = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (b = 0; b < ac; b++)
	{
	for (e = 0; av[b][e]; e++)
	h++;
	}
	h = h + ac;
	ptr = malloc(sizeof(char) * h + 1);
	if (ptr == NULL)
	return (NULL);
	for (b = 0; b < ac; b++)
	{
	for (e = 0; av[b][e]; e++)
	{
	ptr[k] = av[b][e];
	k++;
	}
	if (ptr[k] == '\0')
	{
	ptr[k++] = '\n';
	}
	}
	return (ptr);
}
