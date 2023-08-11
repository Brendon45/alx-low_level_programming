#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: enter the first string
 * @s2: enter the second string
 * @n: number of bytes
 * Return: the allocated pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t a = 0, b = 0, size1 = 0, size2 = 0;
	char *s;

	while (s1 && s1[size1])
	size1++;
	while (s2 && s2[size2])
	size2++;

	if (n < size2)
	s = malloc(sizeof(char) * (size1 + n + 1));
	else
	s = malloc(sizeof(char) * (size1 + size2 + 1));
	if (!s)
	{
	return (NULL);
	}
	while (a < size1)
	{
	s[a] = s1[a];
	a++;
	}
	while (n < size2 && a < (size1 + n))
		s[a++] = s2[b++];
	while (n >= size2 && a < (size1 + size2))
		s[a++] = s2[b++];
	s[a] = '\0';
	return (s);
}
