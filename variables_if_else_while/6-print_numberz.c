#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)

{
	int chiffre;

	for (chiffre = 0 ;  chiffre < 10 ; chiffre++)
		putchar((chiffre % 10 ) + '0');

	putchar('\n');

	return (0);
}
