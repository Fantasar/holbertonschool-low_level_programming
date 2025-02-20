#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times, each time followed by a new line.
 *
 * Description: This function prints the lowercase alphabet 10 times,
 *              each time followed by a new line character.
 *
 * Return: void
 */
int print_alphabet_x10(void)

{
	char b;
	int a = 0;

	while (a <= 9)
	{
		for (b = 'a'; b <= 'z' ; b++)
			{
			_putchar(b);
			}
			_putchar('\n');
		a++;
	}

	return (0);
}
