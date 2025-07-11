#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *string_nconcat- concatise deux strings.
 *@s1: string 1.
 *@s2: string 2.
 *@n: Nombre de caractere.
 * Return: str la chaine concatiser.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int a, b;
char *str;
unsigned int c, d;

if (s1 == NULL || s2 == NULL)
	{
	return (NULL);
	}
for (a = 0; s1[a] != '\0'; a++)
	{
	}
for (b = 0; s2[b] != '\0'; b++)
	{
	}
if (n >= b)
	{
	n = b;
	}
str = malloc(a + n + 1);
if (str == NULL)
	{
	return (NULL);
	}
for (c = 0; c < a; c++)
	{
	str[c] = s1[c];
	}
for (d = 0; d < n; d++)
	{
	str[a + d] = s2[d];
	}
	str[a + n] = '\0';
return (str);
}
