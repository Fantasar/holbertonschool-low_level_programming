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
int a, c, b, d, taille, taille2, plouf;
taille = 0;
taille2 = 0;

if (s1 == NULL)
{
return (NULL);
for (c = 0; s1[c] != '\0'; c++)
	{
	taille++;
	}
}
if (s2 == NULL)
{
return (NULL);
for (d = 0; s2[d] != '\0'; d++)
	{
	taille2++;
	}
}

plouf = taille + taille2;

str = (char *)malloc(sizeof(char) * (plouf + 1));

if (str == NULL)
	{
	return (NULL);
	}
for (a = 0; a < taille; a++)
	{
	str[a] = s1[a];
	}
for (b = 0; b < taille2; b++)
	{
	str[a] = s2[b];
	}
str[plouf] = '\0';
return (str);
}
