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
int a;
int b;
int taille;
int taille2;
int index = 0;
int plouf;

taille = strlen(s1);
taille2 = strlen(s2);
plouf = taille + taille2 + 1;

str = malloc(plouf *sizeof(char));
if (str == NULL)
	{
	return (NULL);
	}
for (a = 0; s1[a] != '\0'; a++)
	{
	if (s1 == NULL)
		{
		return (NULL);
		}
	str[index] = s1[a];
	index++;
	}
for (b = 0; s2[b] != '\0'; b++)
	{
	if (s2 == NULL)
		{
		return (NULL);
		}
	str[index] = s2[b];
	index++;
	}
str[index] = '\0';
return (str);
}
