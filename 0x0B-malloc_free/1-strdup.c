#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a pointer to a newly allocated space in memory
 * which contains a copy of the string
 * @str: the string
 * Return: Null if str is equal to Null
 */

char *_strdup(char *str)
{
	char *ptr;
	int b, f = 0;
	
	if (str == NULL)
	{
	return (NULL);
	}
	b = 0;
	while (str[b] != '\0')
	{		
	b++;
	}
	
	ptr = malloc(sizeof(char) * (b + 1));
		
	if (ptr == NULL)
	{		
	return (NULL);
	}
	for (f = 0; ptr[f]; f++)
	{		
	ptr[f] = str[f];
	}	
	return (ptr);
}	
