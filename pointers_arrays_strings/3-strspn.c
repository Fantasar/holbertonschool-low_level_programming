#include <stdio.h>
#include "main.h"

/**
 * _strspn - Fonction qui va compter le nombre de caractere different.
 *
 * @s: Un pointeur vers une chaine de caractere.
 * @accept: Un pointeur vers une autre chaine de caractere.
 * Return: return la variable a.
 */

unsigned int _strspn(char *s, char *accept)
{

unsigned int a, b;
int temp;

/*Boucle pour deffiler la chaine s et accept*/

for (a = 0; s[a] != '\0' ; a++)
{
temp = 0;

for (b = 0; accept[b] != '\0'; b++)
{

/* si s[a] est dans accept ajoute 1 a temp */

	if (s[a] == accept[b])
	{
	temp = 1;
	break;
	}
}

/* Condition de sortie pour si s[a] n'est pas dans accept */

	if (temp == 0)
	{
	break;
	}
}
return (a);

}

