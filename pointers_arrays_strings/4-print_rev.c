#include <stdio.h>
#include "main.h"

/**
 * print_rev - Imprime une phrase a l'envers.
 *
 * @s: Stocke la phrase a imprimer.
 *
 * Return: Une phrases en utilisant putchar.
 */

void print_rev(char *s)
{
int a = 0;
int b;
int c;
while (s[a] != '\0')
	{
	a++;
	}
c = a;
for (b = c - 1; b >= 0; b--)
	{
	_putchar(s[b]);
	b--;
	}
_putchar('\n');
}
