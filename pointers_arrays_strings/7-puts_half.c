#include <stdio.h>
#include "main.h"

/**
 * puts_half - Affiche la moitier d'une chaine de caracteres.
 *
 * @str: Un pointeur vers la chaine.
 * Return: Rien.
 */
void puts_half(char *str)
{
int a = 0;
int b;
int temp;

while (str[a] != '\0') /* Calcule la longueur */
	{
	a++;
	}
/* Calcule le point de depart selon la pariter*/
if (a % 2 == 0)
	{
	b = a / 2;
	}
else
	{
	b = (a + 1) / 2;
	}
for (temp = b; temp < a; temp++)  /* Affiche la seconde moitier*/
	{
	_putchar(str[temp]);
	}
_putchar('\n');
}

