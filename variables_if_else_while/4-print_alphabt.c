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
	char plouf = 'a';

	for (plouf = 'a' ; plouf <= 'z' ;  plouf++)
	{
	if (plouf != 'e' && plouf !='q')
		putchar (plouf);
	}

	putchar('\n');


	return (0);
}
