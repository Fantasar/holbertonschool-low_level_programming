#include <stdio.h>
#include <string.h>
#include "main.h"
/**
*print_array - plouf
*@a : plouf
*@n : test
*Return: Always 0
**/
void print_array(int *a, int n)
{
int b;
	{
		for (b = 0; b < n ; b++)
		{
		if (b == 0)
		{
		printf("%d", a[b]);
		}
		else
		printf(", %d", a[b]);
		}
	}
	printf("\n");
}
