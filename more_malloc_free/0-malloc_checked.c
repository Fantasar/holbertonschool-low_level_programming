#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - fonction malloc pour allouer de la memoire.
 *@b: valeur a stocker.
 *Return: pointeur temp.
 */

void *malloc_checked(unsigned int b)
{
void *temp;

temp = malloc(b);
	if (temp == NULL)
		{
		exit(98);
		}
return (temp);
}
