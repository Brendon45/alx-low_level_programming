#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int b;
	int j;

	b = 0;
	while (dest[b] != '\0')
	{
		b++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[b] = src[j];
		b++;
		j++;
	}

	dest[b] = '\0';
	return (dest);
}
