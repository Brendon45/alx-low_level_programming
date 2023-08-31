#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - it sets the value of a bit to 0 at a given index
 * @n: a pointer to the number to be cleared
 * @index: the index starting from 0 or the bit
 * Return: 1 if it worked or -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int clr;

	clr = 1;
	clr = clr << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
	*n = clr ^ *n;

	return (1);
}
