#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - Imprime des nombres.
 * @n: Nombres a imprimer.
 * @separator: signe de l'operateur
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int num;

va_list args;
va_start(args, n);

if (separator == NULL)
	{
	}
if (n == 0)
	{
	}

for (num = 0; num < n; num++)
	{
	int arg = va_arg(args, int);

	if (num == 0)
		{
		printf("%d", arg);
		}
	else
		{
		printf("%s", separator);
		printf("%d", arg);
		}
	}
printf("\n");
va_end(args);
}

