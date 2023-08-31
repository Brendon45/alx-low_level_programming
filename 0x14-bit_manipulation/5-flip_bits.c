#include "main.h"

/**
 * flip_bits - returns the number of bits to get from one number to another
 * @n: the first number to be printed
 * @m: the second number to be printed
 * Return: the number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int answer;
	unsigned long int add;

	answer = n ^ m;
	for (add = 0; answer > 0;)
	{
		if ((answer & 1) == 1)
		add++;
		answer = answer >> 1;
	}
	return (add);
}
