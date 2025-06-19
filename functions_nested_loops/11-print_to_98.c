#include <stdio.h>
#include "main.h"

/**
* print_to_98 - imprime les nombres dans l'ordre de n a 98
* @n: valeurs de n dans la fonction
*
* Return: un vide
*/

void print_to_98(int n)
{
int a;
if (n < 98)
{
	for (a = n; a <= 98; a++)
	{
		if (a == 98)
			{
			printf("%d", a);
			}
		else
			{
			printf("%d, ", a);
			}
	}
	printf("\n");
}
else
{
	for (a = n; a >= 98; a--)
	{
		if (a == 98)
			{
			printf("%d", a);
			}
		else
			{
			printf("%d, ", a);
			}
	}
	printf("\n");
}
}


