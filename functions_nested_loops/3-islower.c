#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * int_islower(int c) - Prints the alphabet 10 times,
 *		each time followed by a new line.
 * _islower - Verifie si un caractere est une lettre minuscule.
 * @c: Le caractere a  verifier.
 *
 * Retourne : 1 si le caractère est une lettre minuscule, 0 sinon
 * Description: This function prints the lowercase alphabet 10 times,
 *              each time followed by a new line character.
 *
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);

}
