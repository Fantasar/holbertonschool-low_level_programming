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
int a, c;

if (str == NULL)
	{
	return ("");
	}
/** Calcule la longeur de la chaine.*/
for (c = 0; str[c] != '\0'; c++)
	{
	}
/** Alloue de la memoire pour la nouvelle chaine.*/
dup = malloc(sizeof(char) * (c + 1));
if (dup == NULL)
	{
	return (NULL);
	}
/** Copie la chaine dans la nouvelle memoire.*/
for (a = 0; a <= c; a++)
	{
	dup[a] = str[a];
	}

return (dup);
}
