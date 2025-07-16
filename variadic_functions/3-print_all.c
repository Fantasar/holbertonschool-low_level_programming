#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, first = 1;
	char *s;
	char t;

	va_start(args, format);
	while (format && format[i])
	{
		t = format[i];
		if (t == 'c' || t == 'i' || t == 'f' || t == 's')
		{
			if (!first)
				printf(", ");
			first = 0;

			switch (t)
			{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				printf("%s", s ? s : "(nil)");
				break;
			}
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
