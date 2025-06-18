#include <stdio.h>
#include "main.h"

/**
* times_table - table de multilication
* @void: vide
* Return: renvoie un vide
*/

void times_table(void)
{
int a;
int b;
int c;
for (a = 0; a <= 9; a++)
	{
	_putchar('0');
	for (b = 0; b <= 9; b++)
		{
		_putchar(',');
		_putchar(' ');

		c = a * b;
		if (c <= 9)
		_putchar(' ');
		else
		_putchar((c / 10) + '0');
		_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
