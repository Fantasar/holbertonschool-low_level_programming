#include "main.h"

/**
 * print_most_numbers - multiplies two integers
 * @a char
 *
 * Return: 0.
 */

void print_most_numbers(void)
{
	char a;

	for (a = 0; a <= 9; a++)
		{
	if (a != 2)
		{
	if (a != 4)
		_putchar ((a % 10) + '0');
		}
	}
	_putchar('\n');
}
