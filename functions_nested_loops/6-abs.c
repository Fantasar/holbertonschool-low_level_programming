#include <stdio.h>
#include "main.h"
#include <stdlib.h>
int _abs(int j)
/**
 * _abs - Computes the absolute value of an integer
 * @j: The integer to compute the absolute value of
 *
 * Return: The absolute value of the integer
 */
{
if(j > 0)
	{
	return abs(j);
	}
else if(j == 0)
	{
	return abs(j);
	}
else
	{
	return abs (-j);
	}
}
