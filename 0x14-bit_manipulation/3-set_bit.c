#include "main.h"

/**
 * set_bit - A function that sets the value of a bit
 * to 1 at a given index
 * @n: A pointer to the number to be set
 * @index: the index, starting from 0
 * Return: 1 for correct, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
