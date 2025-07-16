#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - Imprime des nombres.
 * @n: Nombres a imprimer.
 * @separator: signe de l'operateur
 */

void print_all(const char * const format, ...)
{

va_list args;
va_start(args, );

*char arg = va_arg(args, char *)

va_end(args);
}
