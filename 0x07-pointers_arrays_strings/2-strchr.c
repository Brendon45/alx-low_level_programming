#include "main.h"
#include <stdio.h>
/**
 * _strchr - returns a pointer to the first occurence of the character
 * c or Null if the character is not found
 * @s: the input
 * @c: the input
 * Return: Always 0 Success
 */

char *_strchr(char *s, char c)
{
	int x = 0;

	for (x = 0; s[x] > '\0'; x++)
	{
	if (s[x] == c)
	{
	return (&s[x]);
	}
	}
	return (0);
}
