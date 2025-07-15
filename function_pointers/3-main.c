#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

int main(char *s)
{
int a = 0;

if (s == NULL)
	{
	return (1);
	}
if (strlen(s) < 2)
	{
	printf("Error\n");
	exit (98);
	}
a = atoi(s);
if (a == 0)
	{
	printf("Error\n");
	exit (99);
	}
return (a);
}
