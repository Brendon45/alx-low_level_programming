#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - Checks string there are digits
 * @str: Array string
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{

	unsigned int read;

	read = 0;
	while (read < strlen(str))

	{
	if (!isdigit(str[read]))
	{
	return (0);
	}

	read++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	int read;
	int str_to_int;
	int sum = 0;

	read = 1;
	while (read < argc)
	{
	if (check_num(argv[read]))

	{
	str_to_int = atoi(argv[read]);
	sum += str_to_int;
	}

	else
	{
	printf("Error\n");
	return (1);
	}

	read++;
	}

	printf("%d\n", sum);

	return (0);
}

