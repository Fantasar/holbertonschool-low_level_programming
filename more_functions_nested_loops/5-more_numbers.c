#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Affiche une suite de nombres.
 *
 * Return: 10 fois une series de nombres.
 */

void more_numbers(void)
{
int a;
int b;

for (a = 0; a < 10; a++)
	{
	for (b = 0; b <= 14; b++)
		{
		if (b > 9)
			{
			_putchar((b / 10) + '0');
			}
		_putchar((b % 10) + '0');
		}
	_putchar(10);
	}
}
