#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Affiche un triangle en utilisant les boucles for.
 * @size :Variable entier.
 * Return: Un triangle a l'ecran.
 */

void print_triangle(int size)
{
int i;
int j;
int a;
if (size <= 0)
	{
	_putchar('\n');
	}
else
	{
	for (a = 1; a <= size; a++)
	{
	for (i = 0; i < size - a; i++)
		{
		_putchar(' ');
		}
		{
		for (j = 0; j < a; j++)
			{
			_putchar('#');
			}
		}
	_putchar('\n');
	}
	}
}
