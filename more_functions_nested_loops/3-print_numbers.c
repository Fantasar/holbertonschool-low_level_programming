#include <stdio.h>
#include "main.h"

/**
 * print_numbers - affiche les nombres de 0 a 9.
 *
 *
 * Return: Les nombres de 0 a 9 dans la variable a.
 */

void print_numbers(void)
{
char a;
for (a = 0; a <= 9; a++)
	{
	_putchar(a + '0');
	}
_putchar('\n');
}
