#include <stdlib.h>
#include <stdio.h>

/**
 * main - a function that prints the opcodes of its own main functions
 * @argc: the number of arguments of function
 * @argv: the array of arguments of function
 * Return: Always 0 Success
 */

int main(int argc, char *argv[])
{
	int nums, a;
	char *var;

	if (argc != 2)
	{
	printf("Error\n");
	exit(1);
	}
	nums = atoi(argv[1]);
	if (nums < 0)
	{
	printf("Error\n");
	exit(2);
	}
	for (a = 0; a < nums; a++)
	{
	if (a == nums - 1)
	{
	printf("%02hhx\n", var[a]);
	break;
	}
	printf("%02hhx\n", var[a]);
	}
	return (0);
}
