#include <stdio.h>
#include "main.h"

/**
 * puts2 - Imprime une suite de nombre par 2.
 *
 * @str: La suite de nombre.
 *
 * Return: Une suite de chiffre par 2.
 */

void puts2(char *str)
{
int a;
for (a = 0; str[a] != '\0'; a += 2)
	{
	_putchar(str[a]);
	}
_putchar('\n');
}

