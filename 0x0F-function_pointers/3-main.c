#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - prints the result of all operations
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 Success
 */

int main(int argc, char *argv[])
{
	int num_1, num_2;
	char *op;

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}
	num_1 = atoi(argv[1]);
	op = argv[2];
	num_2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
	printf("Error\n");
	exit(99);
	}
	if ((*op == '/' && num_2 == 0) || (*op == '%' && num_2 == 0))
	{
	printf("Error\n");
	exit(100);
	}
	printf("%d\n", get_op_func(op)(num_1, num_2));
	return (0);
}
