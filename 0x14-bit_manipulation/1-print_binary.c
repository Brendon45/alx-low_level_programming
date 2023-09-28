#include "main.h"

/**
 * print_binary - A function that prints the binary represantation
 * of a number
 * @n: the number to be printed
 */

void print_binary(unsigned long int n)
{
	int a, add = 0;
	unsigned long int bns;

	for (a = 63; a >= 0; a--)
	{
	bns = n >> a;

	if (bns & 1)
	{
	_putchar('1');
	add++;
	}
	else if (add)
	_putchar('0');
	}
	if (!add)
	_putchar('0');
}
