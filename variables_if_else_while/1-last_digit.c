#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int plouf;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	plouf = (n % 10);
	if (plouf > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, plouf);
	}
	else if (plouf != 0 && plouf < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, plouf);
	}
	else if (plouf == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, plouf);
	}
	return (0);
}
