#include <stdio.h>
#include "main.h"

/**
 *_pow_recursion - Fonction qui va realiser une puissance.
 *
 * @x: Variable numero une.
 * @y: Variable numero deux.
 * Return: renvoie la puissance de x et y.
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
	{
	return (-1);
	}
else if (y == 0)
	{
	return (1);
	}
else
	{
	return (x * _pow_recursion(x,  y - 1));
	}
}
