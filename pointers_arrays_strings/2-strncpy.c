#include <stdio.h>
#include "main.h"

/**
 * _strncpy - Fonction pour concatiser deux phrase et
 *		et completer avec des Nuls.
 *
 * @dest: Un pointeur vers une chaine vide.
 * @src: Un pointeur vers une string.
 * @n: Un entier pour delimiter la fin de la chaine.
 *Return: Rien.
 */

char *_strncpy(char *dest, char *src, int n)
{
int b;

/* Copie les caracteres de src vers dest */
for (b = 0; b < n && src[b] != '\0'; b++)
	{
	dest[b] = src[b];
	}

/* Boucle pour completer avec des nuls */
while (b < n)
	{
	dest[b] = '\0';
	}

return (dest);
}
