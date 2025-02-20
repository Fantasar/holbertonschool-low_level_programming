#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * print_alphabet - test
 *
 * Return: Always 0
 */
/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
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
