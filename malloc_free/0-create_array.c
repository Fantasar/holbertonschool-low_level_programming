#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Imprime un tableaux.
 * @size: Contient la taille du tableaux.
 * @c: Contient le caractere a integrer dans le tableaux.
 *
 * Return: le pointeur a.
 */

char *create_array(unsigned int size, char c)
{
unsigned int b;
char *a;

if (size == 0)
	{
	return (NULL);
	}
a = malloc(size * sizeof(char));
if (a == NULL)
	{
	return (NULL);
	}
for (b = 0; b < size; b++)
	{
	a[b] = c;
	}
return (a);
}
