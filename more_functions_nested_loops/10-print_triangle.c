#include "main.h"

/**
 * print_triangle - multiplies two integers
 *@size: int size
 *
 * Return: void.
 **/
void print_triangle(int size)
{
	int a;
	int b;

	if(size <= 0)
	{
	_putchar('\n');
	return;
	}
	for(b = 1; b <= size; b++)
	{
	for(a = size - b; a > 0; a--)
	{
	_putchar(' ');
	}
	for(a = 1; a <= b; a++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
}

