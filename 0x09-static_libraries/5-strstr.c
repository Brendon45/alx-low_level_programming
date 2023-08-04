#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: input
 * @needle: input
 * Return: Always 0 Success
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *m = haystack;
	char *n = needle;

	while (*m == *n && *n != '\0')
	{
	m++;
	n++;
	}
	if (*n == '\0')
	return (haystack);
	}
	return (0);
	}
