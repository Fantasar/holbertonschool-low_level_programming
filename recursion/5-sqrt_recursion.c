#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - Fonction qui renvoie la racine carrer d'un nombre positifs
 * @num: La variable temporaire que l'on va multiplier pour chercher n.
 * @n: Le nombre initiales.
 * Return: La racine d'un nombre n si n est negatif
 * renvoie -1 si 0 renvoie 0.
 */

int _sqrt_recursion(int n, int num)
{

if (n < 0)
	{
	return (-1);
	}
else if (n == 0)
	{
	return (0);
	}
else if (num * num == n)
	{
	return (num);
	}
else if (num * num > n)
	{
	return (-1);
	}
else
	{
	return (_sqrt_recursion(n, num + 1));
	}
}


