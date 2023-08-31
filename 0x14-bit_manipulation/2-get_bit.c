#include "main.h"

/**
 * get_bit - a function that sets the value of a bit to 1 at a given index
 * @index: the index, starting from 0 of the bit
 * @n: the number to be returned
 * Return: the value of the bitat index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int get_bit;

	if (index > 63)
	{
	return (-1);
	}

	get_bit = (n >> index) & 1;
	return (get_bit);
}
