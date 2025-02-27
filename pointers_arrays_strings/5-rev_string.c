#include <stdio.h>
#include "main.h"
/**
*rev_string - plouf
*
*@s: rrr
*Return: Always 0
**/
void rev_string(char *s)
{
int plouf = 0;
int i;
char temp;
for (plouf = 0; s[plouf] != '\0'; plouf++)
{
}
for (i = 0; i < plouf / 2 ; i++)
{
temp = s[i];
s[i] = s[plouf - i - 1];
s[plouf - i - 1] = temp;
}
}
