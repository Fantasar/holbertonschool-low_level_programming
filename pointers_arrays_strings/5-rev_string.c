#include <stdio.h>
#include "main.h"

/**
 * rev_string - Imprime une phrase a l'envers.
 *
 * @s: pointeur sur le debut du mots.
 *
 * Return: Une phrases en utilisant putchar.
 */

void rev_string(char *s)
{
int left = 0;
int right;
int a = 0;

while (s[a] != '\0')
	{
	a++;
	}
right = a - 1;
while (left < right)
		{
char temp = s[left];
s[left] = s[right];
s[right] = temp;
left++;
right--;
		}
}

