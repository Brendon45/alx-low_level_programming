#include "main.h"

/**
 * print_most_numbers - print num except 2 and 4
 *
 * return: void
 */

void print_most_numbers(void)
{
	char t;

	for (t = '0'; t <= '9'; t++)
	{
	if (!(t == '2' || t == '4'))
	_putchar(t);
	}
	_putchar('\n');
}
