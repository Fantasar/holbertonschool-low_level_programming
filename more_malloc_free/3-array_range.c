#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - fonction pour creer un tableau d'entier.
 * @min: valeur minimun.
 * @max: valeur maximum.
 *
 * Return: ptr pointeur dans le tableau.
 */

int *array_range(int min, int max)
{
int *ptr;
int a;
int taille;

if (min == max)
	{
	return (NULL);
	}
if (min > max)
	{
	return (NULL);
	}

taille = max - min + 1;
ptr = malloc(taille *sizeof(int));
if (ptr == NULL)
	{
	return (NULL);
	}
for (a = 0; a < taille; a++)
	{
	ptr[a] = min + a;
	}
return (ptr);
}
