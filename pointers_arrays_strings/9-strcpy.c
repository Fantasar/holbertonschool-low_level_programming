#include <stdio.h>
#include <string.h>
#include "main.h"
/**
*_strcpy - plouf
*@dest : plouf
*@src : test
*Return: Always 0
**/
char *_strcpy(char *dest, char *src)
{

int i;
i = 0;
while ((dest[i] = src[i]) != '\0')
	{
	i++;
	}
	return (dest);
}

