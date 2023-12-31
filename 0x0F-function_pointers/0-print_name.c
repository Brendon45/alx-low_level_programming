#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - a function that prints a name
 * @name: name to be printed
 * @f: a pointer to a function
 * Return: Nothing on success
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	return;
	if (f == NULL)
	return;
	f(name);
}
