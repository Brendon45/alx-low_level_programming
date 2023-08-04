#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: destination where memory is stored
 * @src: source where memory is copied
 * @n: the number of bytes
 * Return: memory with n bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int f = 0;
	int g = n;

	for (; f < g; f++)
	{
	dest[f] = src[f];
	n--;
	}
	return (dest);
}
