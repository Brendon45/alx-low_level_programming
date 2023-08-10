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
	size_t a, b, e;
	char *s;

	if (s1 == NULL)
	a = 0;
	else
	{		
	for (a = 0; s1[a] != '\0'; a++)
	};	
	if (s2 == NULL)
	b = 0;
	else
	{	
	for (b = 0; s2[b] != '\0'; b++)
	};	
	if (b > n)
	b = n;
	s = malloc(sizeof(char) * (a + b + 1));
	if (s == NULL)
	return (NULL);
	for (e = 0; e < a; e++)
	s[e] = s1[e];
	for (e = 0; e < b; e++)
	s[e + a] = s2[e];
	s[a + b] = '\0';
	return (s);
}
