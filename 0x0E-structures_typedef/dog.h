#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defining a new type struct dog
 * @name: the name of dog
 * @age: the age of dog
 * @owner: the owner of dog
 * Description: a defined new structure of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
