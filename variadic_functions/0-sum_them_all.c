#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Additionne des fonction varibles
 *@n: variables constantes.
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int a;
int resultat = 0;

va_list args;
va_start(args, n);

if (n == 0)
	{
	return (0);
	}
for (a = 0; a < n; a++)
	{
	int arg = va_arg(args, unsigned int);

	resultat += arg;
	}
va_end(args);
return (resultat);
}
