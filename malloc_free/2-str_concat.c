#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatise deux phrase ensembles.
 *@s1: la 1 ere phrase.
 *@s2: la 2 eme phrase.
 * Return: retourn la copies des deux phrases..
 */

char *str_concat(char *s1, char *s2)
{
char *str;
int a, b;
int taille = 0;
int taille2 = 0;

/**calcule la longeur de S1 & s2 */
if (s1 != NULL)
{
while (s1[taille] != '\0')
	{
	taille++;
	}
}
if (s2 != NULL)
{
while (s2[taille2] != '\0')
	{
	taille2++;
	}
}

/** Alloue la memoire pour la nouvelle chaine */
str = malloc(sizeof(char) * (taille + taille2 + 1));
if (str == NULL)
	{
	return (NULL);
	}
/** Copie s1 & s2 dans str */
for (a = 0; a < taille; a++)
	{
	str[a] = s1[a];
	}
for (b = 0; b < taille2; b++)
	{
	str[a + b] = s2[b];
	}

str[taille + taille2] = '\0';
return (str);
}
