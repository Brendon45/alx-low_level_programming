#include "main.h"

/**
 * get_bit - It  returns value of bit at an index in a decimal number
 * @n: It  is the  number to search
 * @index: It is the index of the bit
 *
 * Return:The value of  bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
