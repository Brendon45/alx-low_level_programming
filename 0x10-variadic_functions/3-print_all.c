#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: it is a list of types of arguments passed to the function
 * Return; Nothing on success
 */
void print_all(const char * const format, ...)
{
	int a, print_any;
	char *str;
	va_list var;

	va_start(var, format);
	a = 0;
	while (format != NULL && format[a] != '\0')
	{
	switch (format[a])
	{
	case 'c':
	printf("%c", va_arg(var, int));
	print_any = 0;
	break;
	case 'i':
	printf("%d", va_arg(var, int));
	print_any = 0;
	break;
	case 'f':
	printf("%f", va_arg(var, double));
	print_any = 0;
	break;
	case 's':
	str = va_arg(var, char *);
	if (str == NULL)
	str = "(nil)";
	printf("%s", str);
	print_any = 0;
	break;
	default:
	print_any = 1;
	break;
	}
	if (format[a + 1] != '\0' && print_any == 0)
	printf(", ");
	a++;
	}
	printf("\n");
	va_end(var);
}
