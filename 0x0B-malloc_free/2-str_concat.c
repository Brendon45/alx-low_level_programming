#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: Null on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int a, v;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	a = v = 0;
	while (s1[a] != '\0')
	a++;
	while (s2[v] != '\0')
	v++;

	conct = malloc(sizeof(char) * (a + v + 1));
	if (conct == NULL)
	{
	return (NULL);
	}
	a = v = 0;
	while (s1[a] != '\0')
	{
	conct[a] = s1[a];
	a++;
	}
	while (s2[v] != '\0')
	{
	conct[a] = s2[v];
	a++, v++;
	}
	conct[a] = '\0';
	return (conct);
}
