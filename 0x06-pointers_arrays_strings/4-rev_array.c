#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int b;
	int t;

	for (b = 0; b < n--; b++)
	{
	t = a[b];
	a[b] = a[n];
	a[n] = t;
	}
}
