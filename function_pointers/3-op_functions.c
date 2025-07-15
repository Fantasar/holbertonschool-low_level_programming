#include <stdlib.h>
#include "3-calc.h"
#include <string.h>

/**
 *op_add - Addition de a et b
 * @a: c'est un entier.
 * @b: c'est un entier.
 * Return: Le resultat.
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 *op_sub - Soustraction de a et b
 * @a: c'est un entier.
 * @b: c'est un entier.
 * Return: Le resultat.
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 *op_mul - Multiplication de a et b
 * @a: c'est un entier.
 * @b: c'est un entier.
 * Return: Le resultat.
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 *op_div - Division de a et b
 * @a: c'est un entier.
 * @b: c'est un entier.
 * Return: Le resultat.
 */

int op_div(int a, int b)
{
if (a || b = 0)
	{
	printf("Error\n");
	exit(100);
	}
return (a / b);
}

/**
 *op_mod - Modulo de a et b
 * @a: c'est un entier.
 * @b: c'est un entier.
 * Return: Le resultat.
 */

int op_mod(int a, int b)
{
if (a || b = 0)
	{
	printf("Error\n");
	exit(100);
	}
return (a % b);
}
