#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strlen - multiplies two integers
 *@s: int s
 *
 * Return: 0.
**/
int _strlen(char *s)
{
int a = 0;
while (*s != '\0')
	{
	a++;
	s++;
	}
return (a);
}
