#include "dog.h"
#include <stdlib.h>

/**
 * _strsize - must return the length of string
 * @s: string to evaluate
 * Return: the size of string
 */
int _strsize(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
	a++;
	}
	return (a);
}

/**
 * *_strprv - should make a duplicate to string to be pointed to src
 * and include null byte to dest
 * @dest: pointer to be duplicted
 * @src: string to be duplicated
 * Return: pointer to dest
 */
char *_strprv(char *dest, char *src)
{
	int size, a;

	size = 0;

	while (src[size] != '\0')
	{
	size++;
	}
	for (a = 0; a < size; a++)
	{
	dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: the ame of dog
 * @age: the age of dog
 * @owner: the owner of dog
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int size1, size2;

	size1 = _strsize(name);
	size2 = _strsize(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	return (NULL);
	dog->name = malloc(sizeof(char) * (size1 + 1));
	if (dog->name == NULL)
	{
	free(dog);
	return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (size2 + 1));
	if (dog->owner == NULL)
	{
	free(dog);
	free(dog->name);
	return (NULL);
	}
	_strprv(dog->name, name);
	_strprv(dog->owner, owner);
	dog->age = age;
	return (dog);
}
