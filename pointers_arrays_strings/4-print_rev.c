#include "main.h"

/**
 *print_rev - multiplies two integers
 *@s : int
 * Return: void.
 **/
void print_rev(char *s)
{
	int Plouf = 0;
	int i;

	while (s[Plouf] != '\0')
		{
		Plouf++;
		}
	for (i = Plouf - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
