#include "main.h"

int print_result(char *s, int b, int size);
int _lensize_recursion(char *s);

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0
 * if not
 * @s: input string
 * Return: 1 if it is a palindrome and 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
	return (1);
	}
	return (print_result(s, 0, _lensize_recursion(s)));
}

/**
 * _lensize_recursion - Returns length of a string
 * @s: input string
 * Return: Length of string
 */
int _lensize_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
	return (1 + _lensize_recursion(s + 1));
}

/**
 * print_result - checks the character moving downwards
 * @s: a string to be checked
 * @b: iteration
 * @size: Length of the string
 * Return: 1 if it is a palindrome and 0 otherwise
 */
int print_result(char *s, int b, int size)
{
	if (*(s + b) != *(s + size - 1))
	return (0);
	if (b >= size)
	return (1);
	return (print_result(s, b + 1, size - 1));
}
