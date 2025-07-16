#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, first = 1;
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' ||
		    format[i] == 'f' || format[i] == 's')
		{
			if (!first)
				printf(", ");
			if (first)
				first = 0;

			if (format[i] == 'c')
				printf("%c", va_arg(args, int));
			if (format[i] == 'i')
				printf("%d", va_arg(args, int));
			if (format[i] == 'f')
				printf("%f", va_arg(args, double));
			if (format[i] == 's')
			{
				str = va_arg(args, char *);
				if (str)
					printf("%s", str);
				if (!str)
					printf("(nil)");
			}
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
