#include "main.h"

int real_prime(int n, int k);

/**
 * is_prime_number - return 1 if the input integer is a prime
 * number otherwise return 0
 * @n: Number to find prime
 * Return: 1 if n is a prime number and return 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
	return (0);
	}
	return (real_prime(n, n - 1));
}


/**
 * real_prime - recursion to calculate prime
 * @n: Number to find prime
 * @k: Iteration of statement
 * Return: 1 if n is prime returns 0 otherwise
 */
int real_prime(int n, int k)
{
	if (k == 1)
	{
	return (1);
	}
	if (n % k == 0 && k > 0)
	return (0);
	return (real_prime(n, k - 1));
}
