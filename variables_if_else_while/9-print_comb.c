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
int num;

for (num = '0'; num <= '9'; num++)
{
	putchar(num);
	if (num != '9')
	{
	putchar (',');
	putchar(' ');
	}
}
putchar('\n');
return (0);
}
