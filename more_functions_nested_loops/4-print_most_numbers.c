#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - Affiche les nombres de 0 a 9.
 *
 * Return: Les nombres sans les chiffres 2 et 4.
 */

void print_most_numbers(void)
{
char a;
for (a = 0; a <= 9; a++)
	{
	if (a != 2 && a != 4)
		{
		_putchar(a + '0');
		}
	}
_putchar('\n');
}
