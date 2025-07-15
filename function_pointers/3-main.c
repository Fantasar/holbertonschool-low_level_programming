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

int main(int argc, char *argv[]) {
	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}

int (*operation)(int, int) = get_op_func(argv[2]);

if (operation == NULL)
	{
	printf("Error\n");
	exit(99);
	}

int num1 = atoi(argv[1]);
int num2 = atoi(argv[3]);

if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
	printf("Error\n");
	exit(100);
	}

int result = operation(num1, num2);
printf("%d\n", result);

return (0);
}
