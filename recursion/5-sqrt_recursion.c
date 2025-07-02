#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - Fonction qui renvoie la racine carrer d'un nombre positifs
 * @n: Le nombre initiales.
 * Return: La racine d'un nombre n si n est negatif
 * renvoie -1 si 0 renvoie 0.
 */

int _sqrt_recursion(int n)
{
static int num;
static int boucle = 1;
{
if (boucle)
	{
	num = 0;
	boucle = 0;
	}
if (n < 0)
	{
	boucle = 1;
	return (-1);
	}
if (num * num == n)
	{
	int plouf = num;

	boucle = 1;
	return (plouf);
	}
if (num * num > n)
	{
	boucle = 1;
	return (-1);
	}
num++;
return (_sqrt_recursion(n));
}
}


