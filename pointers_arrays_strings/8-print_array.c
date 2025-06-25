#include <stdio.h>
#include "main.h"

/**
 * print_array - Affiche un tableaux.
 *
 * @a: Un pointeur vers la chaine.
 * @n: une variable.
 *Return: Rien.
 */

void print_array(int *a, int n)
{
int entier;

for (entier = 0; entier < n; entier++)
	{
	if (entier ==  n - 1)
		{
		printf("%d", a[entier]);
		}
	else
		{
		printf("%d, ", a[entier]);
		}
	}
printf("\n");
}
