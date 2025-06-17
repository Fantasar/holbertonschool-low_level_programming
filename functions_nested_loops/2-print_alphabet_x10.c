#include"main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times,
 * followed by a new line each time
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
char c;
int a;
for (a = 0; a <= 9; a++)
	{
	for (c = 'a'; c <= 'z'; c++)
		{
		_putchar(c);
		}
	_putchar('\n');
	}
}
