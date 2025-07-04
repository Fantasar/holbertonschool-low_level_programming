#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Fonction qui retourne a l'envers.
 *
 * @s: Un pointeur vers la zone memoire a modifier.
 */

void _print_rev_recursion(char *s)
{
if (*s == '\0')
	{
	}
else
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
