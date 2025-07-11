#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Crer un nouveau chien.
 * @name: Nom du chien.
 * @age: age du chien.
 * @owner: Proprietaire du chien.
 *
 * Return: Pointeur vers le nouveau chien, ou NULL si la fonction echoue.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newDog;
char newName;
char *newOwner;
int a = 0, b = 0;
int i;

	// Calculer la longueur de name
	while (name[a] != '\0')
	a++;

	// Calculer la longueur de owner
	while (owner[b] != '\0')
	b++;

	// Allouer de la memoire pour la structure dog_t
	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
	return NULL;

	// Allouer de la memoire pour le nom et verifier en cas echec
	newName = malloc(a + 1);
	if (newName == NULL)
		{
		free(newDog);
		return NULL;
		}

	// Copier le nom caractere par caractere
	for (i = 0; i <= a; i++)
	newName[i] = name[i];

	// Allouer de la memoire pour le proprietaire et verifier en cas echec
	newOwner = malloc(b + 1);
	if (newOwner == NULL)
		{
		free(newName);
		free(newDog);
		return NULL;
		}

	// Copier le proprietaire caractere par caractere
	for (i = 0; i <= b; i++)
	newOwner[i] = owner[i];

	// Initialiser les champs de la structure
	newDog->name = newName;
	newDog->age = age;
	newDog->owner = newOwner;

	return newDog;
}
