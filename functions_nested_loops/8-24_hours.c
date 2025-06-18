#include "main.h"
#include <stdio.h>

/**
* jack_bauer - affiche un minuteur
* @void : vide
* Return: sort l'alphabet
*/

void jack_bauer(void)
{
int hour;
int minute;
int a;
int b;
for (a = 0; a < 24; a++)
	{
	for (b = 0; b <= 59; b++)
	{
	hour = a / 10;
	_putchar(hour + '0');
	hour = a % 10;
	_putchar(hour + '0');
	_putchar(':');
	minute = b / 10;
	_putchar(minute + '0');
	minute = b % 10;
	_putchar(minute + '0');
	_putchar('\n');
	}
	}
}

