#include <stdio.h>
#include "main.h"

/**
 * _isdigit - verifie si c est un numeros compris entre 0 et 9 .
 * @c: Le cararctere a controler.
 *
 * Return: return 1 si un chiffre et sinon 0.
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
	{
	return (1);
	}
else
	{
	return (0);
	}
}
