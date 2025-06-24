#include <stdio.h>
#include "main.h"

/**
 * swap_int - echange des valeurs avec des pointeurs.
 *@a: pointeur
 *@b: pointeur
 * Return: Les deux valeurs.
 */

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
