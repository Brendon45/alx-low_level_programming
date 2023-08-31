#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: a pointer to a number to be set
 * @index: the index starting from 0 of the bit to be set
 * Return: 1 if it worked, or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
	return (-1);
	}

	*n = ((1UL << index) | *n);
		return (1);
}
