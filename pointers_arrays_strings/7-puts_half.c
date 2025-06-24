#include <stdio.h>
#include "main.h"

/**
 * main - Enigme de FizzBuzz.
 *
 * Return: Les nombres de 1 a 100.
 */

void puts_half(char *str)
{
int a = 0;
int b;
int temp;

while (str[a] != '\0')
	{
	a++;
	}

if (a % 2 == 0)
{
	b = a / 2;
	for (temp = b; temp < a; b++)
	{
		_putchar(str[temp]);
	}
}
else
{
	b = (a - 1) / 2;
	for (temp = b + 1; temp < a; temp--)
	{
		_putchar(str[temp]);
	}
}
_putchar('\n');
}
