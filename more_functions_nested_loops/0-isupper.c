#include <stdio.h>
#include "main.h"

/**
 * _isupper - verifie la maj ou minuscule de la variable c.
 * @c: Le cararctere a controler.
 *
 * Return: su c est maj return 1 sinon 0.
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
else
	{
	return (0);
	}
}
