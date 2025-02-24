#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 *_isupper - Controle les lettres majuscules et minuscules.
 *
 *Cette fonction prend un caractere en entre et retourne 1 si
 *le caractere est une lettre minuscule
 *(comprise entre 'a' et 'z' en termes de valeurs ASCII).
 *Sinon, elle retourne 0.
 *
 *Return:
 *1 si le caractere est une lettre minuscule, 0 sinon.
 */

int _isupper(int c)

{
	if(c < 91)
	{
	return(1);
	return('\n');
	}
	else if(c < 123)
	{
	return(0);
	}
	else
	return(0);
	}

