#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 *print_sign - Verifie si un caractere est une lettre minuscule
 *@c: Le caractere aÃverifier
 *
 *Cette fonction prend un caractere en entre et retourne 1 si
 *le caractere est une lettre minuscule
 *(comprise entre 'a' et 'z' en termes de valeurs ASCII).
 *Sinon, elle retourne 0.
 *
 *Return:
 *1 si le caractere est une lettre minuscule, 0 sinon.
 */

int print_sign(int n)
{

if (n > 1)
	{
	_putchar('+');
	return (1);
	}
if (n == 0)
	{
	_putchar('0');
	return (0);
	}
else
	{
	_putchar('-');
	return (-1);
	}
}
