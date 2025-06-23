#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Imprime un triangle.
 *
 * @n: Le nombre de repetitions dans la boucle.
 *
 * Return: Un motif de '\' avec des retours a la lignes.
 */

void print_diagonal(int n)
{
int a;
int b;
if (n <= 0)
	{
	_putchar('\n');
	}
else
	{
	for (a = 0; a < n; a++)
		{
		for (b = 0; b < a; b++)
			{
			_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
}
