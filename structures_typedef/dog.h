#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog_t - Represents a dog with basic information.
 * @name: Pointer to the dog's name.
 * @age: Age of the dog in years.
 * @owner: Pointer to the name of the dog's owner.
 */

struct dog_t
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
