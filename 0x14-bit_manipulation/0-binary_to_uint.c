#include "main.h"

/**
 * binary_to_uint - it converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int res = 0;

	if (!b)
	return (0);

	for (k = 0; b[k]; k++)
	{

		if (b[k] < '0' || b[k] > '1')
		return (0);
		res = 2 * res + (b[k] - '0');
	}
	return (res);
}
