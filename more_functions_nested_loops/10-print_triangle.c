#include "main.h"

/**
 * print_square - multiplies two integers
 *@size: int size
 *
 * Return: 0.
 **/
void print_triangle(int size)
{
	int a;
	int b;

	if (size <= 0)
	{
	_putchar('\n');
	}
	for (b = 1; b <= size; b++)
		{
		for (a = 1; a <= b; a++)
		{
		_putchar('#');
		}
		_putchar('\n');
	}
}

