#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 *main - Fonction principal.
 *
 * @argc: Nombre d'argument.
 * @argv: Valeurs des arguments.
 * Return: Un entier.
 */

int main(int argc, char *argv[])
{
int a = 0;

if (argc < 2)
	{
	printf("Error\n");
	return (1);
	}
if (strlen(argv[1]) < 2)
	{
	printf("Error\n");
	exit(98);
	}
a = atoi(argv[1]);

if (a == 0)
	{
	printf("Error\n");
	exit(99);
	}
return (a);
}
