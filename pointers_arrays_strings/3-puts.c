#include "main.h"

/**
 *_puts - multiplies two integers
 *@str: int size
 *
 * Return: void.
 **/
void _puts(char *str)
{

while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
