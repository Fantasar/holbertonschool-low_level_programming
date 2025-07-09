#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - copie deux string.
 *
 *@str: string a copier.
 * Return: retourne dup l'emplacement de la copie.
 */

char *_strdup(char *str)
{
char *dup;
unsigned int a = 0;
unsigned int b;

if (str == NULL)
	{
	return (NULL);
	}
/** Calcule la longeur de la chaine.*/
while (str[a] != '\0')
	{
	a++;
	}
/** Alloue de la memoire pour la nouvelle chaine.*/
dup = malloc(sizeof(char) * (a + 1));
if (dup == NULL)
	{
	return (NULL);
	}
/** Copie la chaine dans la nouvelle memoire.*/
for (b = 0; b <= a; b++)
	{
	dup[b] = str[b];
	}

return (dup);
}
