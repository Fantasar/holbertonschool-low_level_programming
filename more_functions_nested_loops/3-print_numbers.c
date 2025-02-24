#include "main.h"

/**
 * print_numbers - multiplies two integers
 * @a char
 *
 * Return: 0.
 */
void print_numbers(void)
{
	char a;

	for (a = 0; a <= 9; a++)
		{
		_putchar ((a % 10) + '0');
		}
		_putchar('\n');
}
