#include <stdio.h>
#include "main.h"

/**
 * _atoi - Convertie une chaine en entier.
 *
 * @s: Un pointeur vers la chaine.
 *
 *Return: la valeur n.
 */

int _atoi(char *s)
{
int n = 0;
int sign = 1;
int i = 0;

/*Ignore les chiffres*/
while (s[i] != '\0' && !(s[i] >= '0' && s[i] <= '9'))
{
/* Inverse le signe */
	if (s[i] == '-')
	{
	sign *= -1;
	}
	i++;
}

/*Convertie les chiffres en nombre */
while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
	{
	n = n * 10 + (s[i] - '0');
	i++;
	}

/* Permet d'appliquer le signe et faire le retour */
return (n * sign);
}
