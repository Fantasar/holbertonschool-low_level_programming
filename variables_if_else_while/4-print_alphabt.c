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
char alph;

for (alph = 'a'; alph <= 'z'; alph++)
	{
	if (alph != 'e' && alph != 'q')
	{
	putchar(alph);
	}
	}
putchar('\n');
return (0);
}
