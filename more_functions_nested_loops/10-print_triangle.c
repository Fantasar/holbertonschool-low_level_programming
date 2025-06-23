#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - Affiche les nombres de 0 a 9.
 *
 * Return: Les nombres sans les chiffres 2 et 4.
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
	for(a = 1; a <= size; a++)
	{
	for(i = 0; i < size - a; i++)
		{
		_putchar(' ');
		}
		{
		for(j = 0; j < a; j++)
			{
			_putchar('#');
			}
		}
	_putchar('\n');
	}
	}
}
