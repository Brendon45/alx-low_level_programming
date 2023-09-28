#include "main.h"

/**
 * flip_bits - A function that returns the number of bits from one
 * number to another
 * @n:  the first number
 * @m:	the second number
 * Return: the number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int v, add = 0;
	unsigned long int bns;
	unsigned long int exclusive = n ^ m;

	for (v = 63; v >= 0; v--)
	{
	bns = exclusive >> v;
	if (bns & 1)
	add++;
	}
	return (add);
}
