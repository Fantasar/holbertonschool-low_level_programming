#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - Represents a dog with basic information.
 * @name: Pointer to the dog's name.
 * @age: Age of the dog in years.
 * @owner: Pointer to the name of the dog's owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
