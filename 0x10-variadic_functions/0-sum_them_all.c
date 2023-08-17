#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters to be passed
 * @...: variable numbers assigned
 * Return: 0 if n == 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ar;
	unsigned int a, sum = 0;

	va_start(ar, n);

	for (a = 0; a < n; a++)
	{
	sum = sum + va_arg(ar, int);
	}
	va_end(ar);
	return (sum);
}
