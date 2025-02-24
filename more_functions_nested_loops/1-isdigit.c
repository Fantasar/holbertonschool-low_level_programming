#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *_isdigit - Controle les lettres majuscules et minuscules.
 *@c : Le caractere a verifier.
 *
 *Cette fonction prend un caractere en entre et retourne 1 si
 *le caractere est une lettre minuscule
 *(comprise entre 'a' et 'z' en termes de valeurs ASCII).
 *Sinon, elle retourne 0.
 *
 *Return:
 *1 si le caractere est une lettre minuscule, 0 sinon.
 */

int _isdigit(int c)
{
	if (c < '1' && c < '9')
	{
		return (1);
	}
	return (0);
}
