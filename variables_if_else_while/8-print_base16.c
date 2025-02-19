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

	int cheval;
	char alphabet;

	for (cheval = 0 ; cheval <= 9 ; cheval++)
	{
	putchar((cheval % 10) + '0');
	}

	for (alphabet = 'a' ; alphabet <= 'f' ; alphabet++)
	{
	putchar(alphabet);
	}

	putchar ('\n');

	return (0);
}
