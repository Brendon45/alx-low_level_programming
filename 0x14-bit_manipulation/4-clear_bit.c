#include "main.h"

/**
 * clear_bit - A function that sets the value of a bit
 * at a given bit to 0
 * @n: a pointer to the number to be cleared
 * @index: index, starting from 0
 * Return: 1 for correct, -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
