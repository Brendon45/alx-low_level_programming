#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialialize a variable of type struct dog
 * @d: pointer of struct dog
 * @name: the name to be initialized
 * @age: the age to be initialized
 * @owner: the owner to be initialized
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
