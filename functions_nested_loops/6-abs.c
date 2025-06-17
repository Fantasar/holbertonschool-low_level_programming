#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _abs - Computes the absolute value of an integer
 * @j: The integer to compute the absolute value of
 *
 * Return: The absolute value of the integer
 */
int _abs(int j)
{
if (j > 0)
	{
	return (abs(j));
	}
else if (j == 0)
	{
	return (abs(j));
	}
else
	{
	return (abs(-j));
	}
}
