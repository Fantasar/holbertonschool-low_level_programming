#include <stdio.h>
#include "main.h"

/**
 * _strcat - Concatise deux series phrases ensemble.
 *
 * @dest: Un pointeur vers la chaine.
 * @src: Un pointeur vers l'autre chaine.
 *Return: dest.
 */

char *_strcat(char *dest, char *src)
{
int a;
int b;
for (a = 0; dest[a] != '\0'; a++)
	{
	}
for (b = 0; src[b] != '\0'; b++)
	{
	dest[a + b] = src[b];
	}
dest[a + b] = '\0';

return (dest);
}
