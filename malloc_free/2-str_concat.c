#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Concatise deux phrase ensemble.
 *@s1: la 1 ere phrase.
 *@s2: la 2 eme phrase.
 * Return: retourn la capoies des deux phrases..
 */
char *str_concat(char *s1, char *s2)
{
char *str;
int a, c, b, d, taille, taille2, plouf;
int index = 0;

if (s1 == NULL)
	{
	return (NULL);
	}
for (c = 0; s1[c] != '\0'; c++)
	{
	taille++;
	}
if (s2 == NULL)
	{
	return (NULL);
	}
for (d = 0; s2[d] != '\0'; d++)
	{
	taille2++;
	}
plouf = taille + taille2 + 1;
str = malloc(plouf *sizeof(char));

if (str == NULL)
	{
	return (NULL);
	}
for (a = 0; a < taille; a++)
	{
	str[index] = s1[a];
	index++;
	}
for (b = 0; b < taille2; b++)
	{
	str[index] = s2[b];
	index++;
	}
str[index] = '\0';
return (str);
}
