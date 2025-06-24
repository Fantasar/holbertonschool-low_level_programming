#include <stdio.h>
#include "main.h"

/**
 * _puts - Imprime une phrase.
 *
 * @str: Le nombre de repetitions dans la boucle.
 *
 * Return: Une phrases en utilisant putchar.
 */

void _puts(char *str)
{
int a = 0;
while (str[a] != '\0')
	{
	_putchar(str[a]);
	a++;
	}
	_putchar('\n');
}
