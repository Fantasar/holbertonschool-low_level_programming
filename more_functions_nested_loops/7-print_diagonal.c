#include "main.h"

/**
 * print_diagonal - multiplies two integers
 *@n: int n
 *
 * Return: 0.
**/
void print_diagonal(int n)
{
	int a;

		if (n <= 0)
		{
		_putchar('\n');
		}
		for (a = 0; a < n; a++)
		{
			int i;

			for (i = 0; i < a; i++)
			{
			_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
}
