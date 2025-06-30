#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Fonction qui afficher la premiere correspondance
 *	      entre les deux pointeurs.
 * @s: Un pointeur vers la variable a controler.
 * @accept: Le caractere qui vont etre ajouter a *s.
 * Return: return le pointeur modifier.
 */

char *_strpbrk(char *s, char *accept)
{
int a;
int b;

for (a = 0; s[a] != '\0'; a++)
	{
	for (b = 0; accept[b] != '\0'; b++)
		{
		if (s[a] == accept[b])
			{
			return (&s[a]);
			}
		}
	}
return (NULL);
}
