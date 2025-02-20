#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line.
 *
 * Description: This function prints the lowercase alphabet followed by a
 *              newline character.
 *
 * Return: Nothing (void).
 */
int print_alphabet(void)

{
	char b;

	for (b = 'a'; b <= 'z' ; b++)
		{
		_putchar(b);
		}
		_putchar('\n');
	return (0);
}
