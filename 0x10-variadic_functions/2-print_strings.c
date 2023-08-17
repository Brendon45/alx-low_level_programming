#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed between the strings
 * @...: variable numbers
 * Return: Nothing on success
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *ptr;
	unsigned int size;

	va_start(strings, n);

	for (size = 0; size < n; size++)
	{
	ptr = va_arg(strings, char *);
	if (ptr == NULL)
	printf("(nil)");
	else
	printf("%s", ptr);
	if (size != (n - 1) && separator != NULL)
	printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
