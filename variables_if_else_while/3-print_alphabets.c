#include<stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Printf "with proper grammar,
 *		  but the outcome is a piece of art,"
 *
 * Return: Always 0.
 */

int main(void)
{
char dicos;
for (dicos = 'a'; dicos <= 'z'; dicos++)
	{
	putchar(dicos);
	}
for (dicos = 'A'; dicos <= 'Z'; dicos++)
	{
	putchar(dicos);
	}
putchar('\n');
return (0);
}
