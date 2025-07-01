#include <stdio.h>
#include "main.h"

/**
 * factorial - Fonction qui va verifire le factorial de n.
 * @n: Valeur a controler.
 * Return: return n si il est egal a zero.
 */

int factorial(int n)
{
if (n < 0)
	{
	return (-1);
	}
else if (n == 0)
	{
	return (1);
	}
else
	{
	return (n * factorial(n - 1));
	}
}
