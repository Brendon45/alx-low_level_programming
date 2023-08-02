#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion -returns the length of a string
 * @s: input string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int lensize = 0;

	if (*s)
	{
	lensize++;
	lensize = lensize + _strlen_recursion(s + 1);
	}
	return (lensize);
}
