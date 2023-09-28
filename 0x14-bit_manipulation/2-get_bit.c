#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at an index
 * @n: number to be located
 * @index: the index starting from 0
 * Return: value of the bit at index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int byte;

	if (index > 63)
	return (-1);

	byte = (n >> index) & 1;

	return (byte);
}
