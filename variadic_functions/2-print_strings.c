#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - Imprime une string de caractere.
 *@separator: pointeur sur une string.
 *@n: Nombres de chaines de caractere.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int boucle;

va_list args;
va_start(args, n);

if (separator == NULL)
	{
	return;
	}
for (boucle = 0; boucle < n; boucle++)
	{
	char *arg = va_arg(args, char *);

	if (boucle > 0)
		{
		printf("%s", separator);
		}
	if (arg == NULL)
		{
		printf("(nil)");
		}
	if (arg != NULL)
		{
		printf("%s", arg);
		}
	}
printf("\n");

va_end(args);
}
