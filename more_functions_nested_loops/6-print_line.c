#include <stdio.h>
#include "main.h"

/**
 * print_line - Imprime le motif '_' en fonction de n .
 *
 * @n: Le nombre de repetitions dans la boucle.
 *
 * Return: Un motif de '_' avec des retours a la lignes.
 */

void print_line(int n)
{
int a;
if (n <= 0)
	{
	_putchar('\n');
	}
else
	{
	for (a = 1; a <= n; a++)
		{
		_putchar('_');
		}
	_putchar('\n');
	}
}
