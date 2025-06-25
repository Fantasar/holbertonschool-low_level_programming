#include <stdio.h>
#include "main.h"

/**
 *puts_half - Affiche la moitier d'une series de nombres.
 *
 *@str: Un pointeur.
 * Return: La moitier des nombres, de la serie.
 */

void puts_half(char *str)
{
int a = 0;
int b;
int temp;

while (str[a] != '\0') /* calcul la longeur.*/
	{
	a++;
	}

if (a % 2 == 0) /*Si la longeur est paire.*/
	{
	b = a / 2;
	for (temp = b; temp < a; temp++)
		{
		_putchar(str[temp]);
		}
	}
else /* Si la longeur est impair.*/
	{
	b = (a - 1) / 2; /* Commence apres le milieu.*/
	}
for (temp = b + 1; temp < a; temp++)
	{
	_putchar(str[temp]);
	}
_putchar('\n');
}
