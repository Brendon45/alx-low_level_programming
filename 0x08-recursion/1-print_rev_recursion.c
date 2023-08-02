#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - Prints a string in reverse order
 * @s: input the string
 * Return: Always 0 Success
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
