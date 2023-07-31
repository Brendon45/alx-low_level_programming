#include "main.h"
/**
 * _strspn - returns number of bytes in the initial segment of s
 * which consist only of bytes from accept
 * @s: input string
 * @accept: the input to be entered
 * Return: Always 0 Success
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int z = 0;
	int t;

	while (*s)
	{
	for (t = 0; accept[t]; t++)
	{
	if (*s == accept[t])
	{
	z++;
	break;
	}
	else if (accept[t + 1] == '\0')
	return (z);
	}
	s++;
	}
	return (z);
}
