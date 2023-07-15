#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the albhabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
