#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 *jack_bauer - Affiche les minutes et les heures,
 *avant le BOUM.
 *
 *Cette fonction prend un caractere en entre et retourne 1 si
 *le caractere est une lettre minuscule
 *(comprise entre 'a' et 'z' en termes de valeurs ASCII).
 *Sinon, elle retourne 0.
 *
 *Return:
 *1 si le caractere est une lettre minuscule, 0 sinon.
 */

void times_table(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
			_putchar(a * 1 + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
	}
	_putchar('\n');

	for (b = 1; b < 10; b*a)
        {
                        _putchar(b % 10 + '0');
                        _putchar(',');
                        _putchar(' ');
                        _putchar(' ');
        }
	_putchar('\n');
}
