#include <stdio.h>
#include <string.h>
#include "main.h"
/**
*puts2- plouf
*@str : plouf
*Return: Always 0
**/
void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i += 2)
{
	_putchar(str[i]);
}
	putchar('\n');
}
