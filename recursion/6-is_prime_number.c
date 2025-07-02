#include <stdio.h>
#include "main.h"

/**
 * boucle - Fonction qui va verifier les condition de n pour
 *	    savoir si c'est un nombre premier.
 * @n: Contient le chiffre mystere.
 * @div: Contient 2 au debut de la premiere incremantation.
 * Return: relance la boucle en ajoutant un +1 a 2.
 */

int boucle(int n, int div)
{
if (div >= n)
	{
	return (1);
	}
if (n % div == 0)
	{
	return (0);
	}
return (boucle(n, div + 1));
}

/**
 * is_prime_number - Fonction qui va controler si n est deja 1.
 * @n: Contient le chiffre mystere.
 * Return: Appelles la recursion avec la fonction boucle
 *	   et un multiple de 2.
 */

int is_prime_number(int n)
{
if (n <= 1)
	{
	return (0);
	}
else
	{
	return (boucle(n, 2));
	}
}


