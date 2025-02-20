#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line.
 *
 * print_alphabet_x10 - Prints the alphabets 10 line.
 *
 * Description: This function prints the lowercase alphabet followed by a
 *              newline character.
 *
 * Return: Nothing (void).
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
