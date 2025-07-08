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
int a;
int b = 0;
int memoire;
int c;
if (str == NULL)
	{
	return (NULL);
	}
for (c = 0; str[c] <= '\0'; c++)
	{
	memoire++;
	}
dup = malloc(memoire *sizeof(char));
if (dup == NULL)
	{
	return (NULL);
	}
for (a = 0; str[a] != '\0'; a++)
	{
	dup[b] = str[a];
	b++;
	}
dup[b] = '\0';
return (dup);
}
