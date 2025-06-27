#include <stdio.h>
#include "main.h"

/**
 * leet - Remplace une phrase en message coder 1337.
 *
 *@s: Un pointeur.
 *
 * Return: s;
 *
 */

char *leet(char *s)
{
char a [10] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
char b [10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
int num;
int plouf;

for (num = 0; s[num] != '\0'; num++)
	{
	for (plouf = 0; plouf < 10 ; plouf++)
	{
		if (s[num] == a[plouf])
		{
		s[num] = b[plouf];
		}
	}
	}
return (s);
}
