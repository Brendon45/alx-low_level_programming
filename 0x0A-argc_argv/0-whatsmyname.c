#include <stdio.h>
#include "main.h"

/**
 * main - prints the name, followed by a new line
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: Always 0 Success
 */

int main(int argc __attribute__((unused)), char * argv[])
{
	printf("%s\n",*argv);
	return (0);
}
