#include <stdio.h>
#include <string.h>
#include "main.h"
/**
*print_array - plouf
*@str : plouf
*Return: Always 0
**/
void print_array(int *a, int n)
{
int b;
	{
		if (n <= '0')
		{
		return;
		}
		for (b = '0'; b < n ; b++)
		{
		if ( b == '0')
		{
		printf("%d", a[b]);
		}
		else
		printf(",Ã%d",a[b]);
		}
	}
	printf("\n");
}
