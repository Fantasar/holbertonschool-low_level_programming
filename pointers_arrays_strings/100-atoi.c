#include <stdio.h>
#include "main.h"

/**
 * print_array - Affiche un tableaux.
 *
 * @a: Un pointeur vers la chaine.
 * @n: une variable.
 *Return: Rien.
 */

int _atoi(char *s)
{
int n = 0;
int a = 0;
for(a = 0; s[a] == '\0'; a++)
	{
	return (0);
	}
while (s[a] != '\0')
	{
	if(s[a] == '-')
	{
	a = a * - 1;
	a++
	}
for (a = 0; s[a] >= '0' && s[a] <= '9'; a++)
 	{
		if
		{
		n = 10 * n + (s[a] - '0');
		}
	}
return(n);
}
