#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * print_diagsums - Calcul la somme des diagonales.
 *
 * @a: Le pointeur qui indique la position dans le tableaux.
 *
 * @size: Le pointeur qui indique le nombre d'elements dans le tableaux.
 *
 */

void print_diagsums(int *a, int size)

{
int stock = 0;
int stock2 = 0;
int i;
for (i = 0; i < size; i++)
	{
	stock += a[i * size + i];
	stock2 += a[i * size + (size - 1 - i)];
	}
printf("%d ,%d\n", stock, stock2);
}

