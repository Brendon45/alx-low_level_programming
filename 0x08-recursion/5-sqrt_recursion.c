#include "main.h"

int real_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number of a square root
 * Return: answer of square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	return (real_sqrt_recursion(n, 0));
	}

/**
 * real_sqrt_recursion - recursion of a natural number
 * @n: number of a square root
 * @i: iteration of statements
 * Return: answer of square root
 */
int real_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	return (-1);
	if (i * i == n)
	return (i);
	return (real_sqrt_recursion(n, i + 1));
}
