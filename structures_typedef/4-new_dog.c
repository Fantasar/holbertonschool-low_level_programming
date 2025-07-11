#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
unsigned int a = 0;
unsigned int b = 0;

dog_t *new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
	{
	return (NULL);
	}
while (name[a] != '\0')
	{
	a++;
	}
new_dog->name = malloc(sizeof(char) * (a + 1))
if (new_dog->name == NULL)
	{
	return (NULL);
	}
while (owner[b] != '\0')
	{
	b++;
	}
new_dog->owner = malloc(sizeof(char) * (b + 1));
if (new_dog->owner == NULL)
	{
	return (NULL);
	}
return (new_dog);
}
