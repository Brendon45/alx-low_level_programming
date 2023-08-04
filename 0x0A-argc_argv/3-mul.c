#include <stdio.h>
#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: A string to be converted
 * Return: int converted from the string
 */
int _atoi(char *s)
{
	int b, x, z, size, u, value;

	b = 0;
	x = 0;
	z = 0;
	size = 0;
	u = 0;
	value = 0;

	while (s[size] != '\0')
	size++;

	while (b < size && u == 0)
	{
	if (s[b] == '-')
	++x;

	if (s[b] >= '0' && s[b] <= '9')
	{
	value = s[b] - '0';
	if (x % 2)
	value = -value;
	z = z * 10 + value;
	u = 1;
	if (s[b + 1] < '0' || s[b + 1] > '9')
	break;
	u = 0;
	}
	b++;
	}

	if (u == 0)
	return (0);

	return (z);
}

/**
 * main - Multiplies two numbers
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int answer, num_1, num_2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num_1 = _atoi(argv[1]);
	num_2 = _atoi(argv[2]);
	answer = num_1 * num_2;

	printf("%d\n", answer);

	return (0);
}

