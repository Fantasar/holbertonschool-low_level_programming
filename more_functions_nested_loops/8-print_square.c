#include "main.h"

/**
 * print_square - multiplies two integers
 *@size: int size
 *@a: int a
 *@b :int b
 *
 * Return: 0.
 **/
void print_square(int size)
{
	int a;
	int b;

	if (size <= 0 )
	{
	_putchar('\n');
	}
	for (b = 0; b < size; b++)
		{
		for (a = 0; size > a; a++)
		{
		_putchar('#');
		}
		_putchar('\n');
	}
}
