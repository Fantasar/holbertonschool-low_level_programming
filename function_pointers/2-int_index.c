#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Check un tableau de nombre.
 * @array: Le tableau a checker.
 * @size: La taille du tableau.
 * @cmp: Pointeur dans pour s'orienter.
 * Return: -1 si le nombre est inferieur a 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int a;
if (size <= 0)
	{
	return (-1);
	}
for (a = 0; a < size; a++)
	{
	if (cmp(array[a]) != 0)
		{
		return (a);
		}
	}
return (-1);
}
