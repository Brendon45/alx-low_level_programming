#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: nothing on success
 */

void rev_string(char *s)
{
	int counter = 0, i = 0;
	char last_char;

	while (*s)
	{
		s++;
		counter++;
	}
	for (i = 0; i < counter; i++)
	s--;
	for (i = 0; i < (counter / 2); i++)
	{

	int last = counter - 1;

	last_char = s[last - i];
	s[last - i] = s[i];
	s[i] = last_char;
	}
}
