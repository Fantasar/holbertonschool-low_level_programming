#include "dog.h"
/**
 * init_dog - Initialise une variable de type struct dog.
 * @d: Pointeur vers la structure dog a initialiser.
 * @name: Nom du chien.
 * @age: age du chien.
 * @owner: Proprietaire du chien.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
