#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_arg - prints a single argument based on type
 * @type: the type of the argument
 * @args: the va_list to fetch from
 */
void print_arg(char type, va_list args)
{
	char *s;

	if (type == 'c')
	printf("%c", va_arg(args, int));
	else if (type == 'i')
	printf("%d", va_arg(args, int));
	else if (type == 'f')
	printf("%f", va_arg(args, double));
	else if (type == 's')
	{
	s = va_arg(args, char *);
	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
	}
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed
 */
void print_all(const char * const format, ...)
{
va_list args;
int a = 0, premier_v = 1;

va_start(args, format);

while (format && format[a] != '\0')
	{
	if (format[a] == 'c' || format[a] == 'i' ||
	format[a] == 'f' || format[a] == 's')
	{
		if (!premier_v)
		printf(", ");
		else
		premier_v = 0;

		print_arg(format[a], args);
	}
	a++;
	}

	printf("\n");
	va_end(args);
}
