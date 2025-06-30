#include <stdio.h>
#include "main.h"

/**
 * _memset - Fonction qui va remplir le de n fois de b la variable pointer.
 *
 * @s: Un pointeur vers la variable a modifier.
 * @b: Le caractere qui vont etre ajouter a *s.
 * @n: Le nombre d'octets qui vont etre modifier.
 * Return: return le pointeur modifier.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int a = 0;

/* Prevois une sortie si s est Null*/
if (s == NULL)
	{
	return (NULL);
	}

for (a = 0; a < n; a++)
	{
	s[a] = b;
	}
return (s);
}
