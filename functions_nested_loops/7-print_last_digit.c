#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 *print_last_digit - Verifie si un caractere est une lettre minuscule
 *@n: Le caractere aÃverifier
 *
 *Cette fonction prend un caractere en entre et retourne 1 si
 *le caractere est une lettre minuscule
 *(comprise entre 'a' et 'z' en termes de valeurs ASCII).
 *Sinon, elle retourne 0.
 *
 *Return:
 *1 si le caractere est une lettre minuscule, 0 sinon.
 */

int print_last_digit(int n)

{

	_putchar ( '0' + (abs ( n % 10 )));
	return ( n % 10 );

}
