#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints strings, followed by
 * a new line
 * @separator: thr string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: variable numbers
 * Return: Nothing on success
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list number;
	unsigned int size;

	va_start(number, n);

	for (size = 0; size < n; size++)
	{
	printf("%d", va_arg(number, int));
	}		
	if (size != (n - 1) && separator != NULL)
	{
	printf("%s", separator);
	}
	printf("\n");
	va_end(number);
}
