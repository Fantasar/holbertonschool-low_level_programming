#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Fonction qui va implemanter une recursion.
 *
 * @s: Un pointeur vers la zone memoire a modifier.
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
	{
	_putchar('\n');
	}
else
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
}
