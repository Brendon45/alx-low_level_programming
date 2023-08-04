#include "main.h"
#include <stdio.h>
/**
 * _memset- fills the first n bytes of the memory area pointed to by s
 * with the constant byte b
 * @s: the address of memory to be filled
 * @b: value to print
 * @n: the number of bytes to be changed
 * Return: Array with new value of n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int m = 0;

	for (; n > 0; m++)
	{
	s[m] = b;
	n--;
	}
	return (s);
}
