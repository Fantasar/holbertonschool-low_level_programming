#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int print_alphabet(void)

{
	char b;

	for (b = 'a';b <= 'z' ; b++)
		{
		_putchar(b);
		}
		_putchar('\n');
	return(0);
}
