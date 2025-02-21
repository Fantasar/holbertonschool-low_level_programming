#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 *_abs - Verifie si un caractere est une lettre minuscule
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
int _abs(int n)
{
	if (n < 0)
	{
	return (-n);
	}
	return (n);
}
