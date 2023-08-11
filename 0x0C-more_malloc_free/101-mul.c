#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define ERR_MSG "Error"
/**
 * is_number - a string containing a non-digit character
 * @s: a string to be printed
 * Return: Always 0 Success
 */
int is_number(char *s)
{
	int a = 0;

	while (s[a])
	{
	if (s[a] < '0' || s[a] > '9')
	return (0);
	a++;
	}
	return (1);
}
/**
 * _strsize - Returns length of string
 * @s: string to be printed
 * Return: the length
 */
int _strsize(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
	a++;
	}
	return (a);
}
/**
 * errors - fixing errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies two positive numbers
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: Always 0 Success
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int size1, size2, size, a, move, number1, number2, *answer, c = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_number(s1) || !is_number(s2))
	errors();
	size1 = _strsize(s1);
	size2 = _strsize(s2);
	size = size1 + size2 + 1;
	answer = malloc(sizeof(int) * size);
	if (!answer)
	return (1);
	for (a = 0; a <= size1 + size2; a++)
	answer[a] = 0;
	for (size1 = size1 - 1; size1 >= 0; size1--)
	{
	number1 = s1[size1] - '0';
	move = 0;
	for (size2 = _strsize(s2) - 1; size2 >= 0; size2--)
	{
	number2 = s2[size2] - '0';
	move = move + answer[size1 + size2 + 1] + (number1 * number2);
	answer[size1 + size2 + 1] = move % 10;
	move = move / 10;
	}
	if (move > 0)
	answer[size1 + size2 + 1] += move;
	}
	for (a = 0; a < size - 1; a++)
	{
	if (answer[a])
	c = 1;
	if (c)
	_putchar(answer[a] + '0');
	}
	if (!c)
	_putchar ('0');
	_putchar ('\n');
	free(answer);
	return (0);
}
