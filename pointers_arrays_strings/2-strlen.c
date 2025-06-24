#include <stdio.h>
#include "main.h"
#include<string.h>
/**
 * _strlen - Fonction pour compter un chaine de caractere.
 *
 *@s : Valeurs qui contient le mots.
 *
 * Return: la valeur a qui contient le nombre.
 */

int _strlen(char *s)
{
int a;
while (s[a] != '\0')
	{
	a++;
	}
return (a);
}
