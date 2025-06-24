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
int i = 0;

while (str[i] != '\0')
	{
	if (i % 2 == 0)
	_putchar(str[i]);
	i++;
	}

_putchar('\n');
}
