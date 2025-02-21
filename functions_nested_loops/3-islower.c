#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 *_islower - Verifie si un caractere est une lettre minuscule
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

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);

}
