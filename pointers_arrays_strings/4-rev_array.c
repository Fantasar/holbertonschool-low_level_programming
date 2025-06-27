#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverse deux tableaux d'entier.
 *
 * @a: Un pointeur vers un tableaux d'entier.
 * @n: Contient la longeur du tableaux.
 *Return: rien.
 */

void reverse_array(int *a, int n)
{
int temp;
int i;
/*Boucle for pour trouver la moitier du tableaux*/
for (i = 0; i < n / 2; i++)
	{
	temp = a[i];
	a[i] = a[n - i - 1];
	a[n - i - 1] = temp;
	}
}
