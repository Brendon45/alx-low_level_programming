#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed into it
 * followed by a new line
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{

(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
