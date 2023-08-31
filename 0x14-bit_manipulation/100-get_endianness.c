#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int y = 1;
	int lb_endian;

	lb_endian = (int)(((char *)&y)[0]);
	return (lb_endian);
}
