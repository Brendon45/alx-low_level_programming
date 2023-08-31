#include "main.h"

/**
 * print_binary - it prints the binary represantation of a number
 * @n: the number to be printed in binary
 * Return: nothing on success
 */

void print_binary(unsigned long int n)
{
	int b, add = 0;
	unsigned long int result;

	for (b = 63; b >= 0; b--)
	{
	result = n >> b;

	if (result & 1)
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
